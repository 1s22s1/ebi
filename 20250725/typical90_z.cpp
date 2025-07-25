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
    vector<int> visited;

    LinearGraph(T _graph)
    {
        graph = _graph;
    }

    void bfs(vector<long long> starts = {0})
    {
        visited.assign(graph.size(), -1);

        queue<int> queue;

        for (auto start : starts)
        {
            queue.push(start);
            visited.at(start) = 0;
        }

        while (!queue.empty())
        {
            int current = queue.front();
            queue.pop();

            for (int next : graph.at(current))
            {
                if (visited.at(next) != -1)
                {
                    continue;
                }

                queue.emplace(next);
                visited.at(next) = visited.at(current) == 0 ? 1 : 0;
            }
        }
    }

private:
    T graph;
};

int main()
{
    init();

    ll N;
    cin >> N;

    vector<vector<ll>> g(N);
    rep(i, N - 1)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;

        g.at(a).emplace_back(b);
        g.at(b).emplace_back(a);
    }

    LinearGraph graph(g);
    graph.bfs();
    auto visited = graph.visited;

    ll white_count = count_if(visited.begin(), visited.end(), [](int x)
                              { return x == 0; });
    ll black_count = count_if(visited.begin(), visited.end(), [](int x)
                              { return x == 1; });
    ll count = 0;
    rep(i, N)
    {
        if (white_count >= black_count && visited.at(i) == 0)
        {
            cout << i + 1 << ' ';
            count++;
        }

        if (white_count < black_count && visited.at(i) == 1)
        {
            cout << i + 1 << ' ';
            count++;
        }

        if (count == N / 2)
        {
            break;
        }
    }

    cout << endl;

    return 0;
}
