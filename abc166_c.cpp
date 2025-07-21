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

    vector<ll> H(N);
    rep(i, N)
    {
        cin >> H.at(i);
    }

    vector<vector<ll>> G(N);
    rep(i, M)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;

        G.at(a).emplace_back(b);
        G.at(b).emplace_back(a);
    }

    ll answer = 0;

    rep(i, N)
    {
        bool ok = true;
        for (auto e : G.at(i))
        {
            if (H.at(i) <= H.at(e))
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
