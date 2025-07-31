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

    vector<ll> Hn;
    rep(i, N)
    {
        ll h;
        cin >> h;

        Hn.emplace_back(h);
    }

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

    rep(i, N)
    {
        bool ok = true;
        for (auto e : g.at(i))
        {
            if (Hn.at(i) <= Hn.at(e))
            {
                ok = false;
            }
        }

        if (ok)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
