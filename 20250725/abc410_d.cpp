#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

template <typename T>

class LinearGraph
{

public:
    vector<vector<ll>> visited;

    LinearGraph(T _graph)
    {
        graph = _graph;
    }

    void bfs(vector<ll> starts = {0})
    {
        visited.assign(graph.size(), vector<ll>(1024, -1));

        queue<pair<ll, ll>> queue;

        for (auto start : starts)
        {
            queue.push({start, 0});
            visited.at(start).at(0) = 0;
        }

        while (!queue.empty())
        {
            auto current = queue.front();
            queue.pop();

            for (auto next : graph.at(current.first))
            {
                ll next_xor = current.second ^ next.second;

                if (visited.at(next.first).at(next_xor) != -1)
                {
                    continue;
                }

                queue.emplace(next.first, next_xor);
                visited.at(next.first).at(next_xor) = 1;
            }
        }
    }

private:
    T graph;
};

int main()
{
    init();

    ll N, M;
    cin >> N >> M;

    vector<vector<pair<ll, ll>>> g(N);
    rep(i, M)
    {
        ll A, B, W;
        cin >> A >> B >> W;
        A--, B--;

        g.at(A).emplace_back(B, W);
    }

    LinearGraph graph(g);
    graph.bfs();
    auto visited = graph.visited;

    rep(i, 1024)
    {
        if (visited.at(N - 1).at(i) == 1)
        {
            cout << i << endl;

            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
