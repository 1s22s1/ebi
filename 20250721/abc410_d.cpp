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
    vector<vector<int>> visited;

    LinearGraph(T _graph)
    {
        graph = _graph;
    }

    void bfs(vector<int> starts = {0})
    {
        visited.assign(graph.size(), vector<int>(1024, -1));

        queue<pair<int, int>> queue;

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
                int next_xor = current.second ^ next.second;

                if (visited.at(next.first).at(next_xor) != -1)
                {
                    continue;
                }

                queue.push({next.first, next_xor});
                visited.at(next.first).at(next_xor) = 0;
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

    vector<vector<pair<int, int>>> G(N);

    rep(i, M)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        a--, b--;
        G.at(a).emplace_back(b, w);
    }

    LinearGraph graph(G);
    graph.bfs();

    auto visited = graph.visited;

    rep(i, 1024)
    {
        if (visited.at(N - 1).at(i) != -1)
        {
            cout << i << endl;

            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
