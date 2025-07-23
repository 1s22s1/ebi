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

int main()
{
    init();

    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> G(N, vector<ll>());

    rep(i, N)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;

        G.at(a).emplace_back(b);
        G.at(b).emplace_back(a);
    }

    vector<ll> pattern;
    rep(i, N)
    {
        pattern.emplace_back(i);
    }

    ll answer = 0;

    do
    {
        bool ok = true;
        for (auto i : ranges::views::iota(0, N - 1))
        {
            if (find(G.at(pattern.at(i)).begin(), G.at(pattern.at(i)).end(), pattern.at(i + 1)) == G.at(pattern.at(i)).end())
            {
                ok = false;
            }
        }

        if (ok && pattern.at(0) == 0)
        {
            answer++;
        }

    } while (next_permutation(pattern.begin(), pattern.end()));

    cout << answer << endl;

    return 0;
}
