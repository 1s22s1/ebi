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

    vector<vector<ll>> g(N);
    rep(i, M)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;

        g.at(a).emplace_back(b);
        g.at(b).emplace_back(a);
    }

    ll answer = 0;
    vector<ll> vec;
    rep(i, N)
    {
        vec.emplace_back(i);
    }

    do
    {
        bool ok = true;
        rep(i, N - 1)
        {
            if (find(g.at(vec.at(i)).begin(), g.at(vec.at(i)).end(), vec.at(i + 1)) == g.at(vec.at(i)).end())
            {
                ok = false;
            }
        }

        if (ok && vec.at(0) == 0)
        {
            answer++;
        }

    } while (next_permutation(vec.begin(), vec.end()));

    cout << answer << endl;

    return 0;
}
