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

    ll N, Q;
    cin >> N >> Q;

    vector<vector<ll>> g(N);

    rep(i, Q)
    {
        ll type;
        cin >> type;

        ll a, b;

        switch (type)
        {
        case 1:
            cin >> a >> b;
            a--, b--;

            g.at(a).emplace_back(b);

            break;
        case 2:
        {

            cin >> a;
            a--;

            vector<ll> follower;
            rep(i, N)
            {
                if (i != a)
                {
                    if (find(g.at(i).begin(), g.at(i).end(), a) != g.at(i).end())
                    {
                        follower.emplace_back(i);
                    }
                }
            }

            g.at(a).insert(g.at(a).begin(), follower.begin(), follower.end());

            sort(g.at(a).begin(), g.at(a).end());
            auto l = unique(g.at(a).begin(), g.at(a).end());
            g.at(a).erase(l, g.at(a).end());

            break;
        }
        case 3:
        {
            cin >> a;
            a--;

            vector<ll> follower;
            for (auto e : g.at(a))
            {
                for (auto f : g.at(e))
                {
                    if (f != a)
                    {
                        follower.emplace_back(f);
                    }
                }
            }

            g.at(a).insert(g.at(a).begin(), follower.begin(), follower.end());

            sort(g.at(a).begin(), g.at(a).end());
            auto l = unique(g.at(a).begin(), g.at(a).end());
            g.at(a).erase(l, g.at(a).end());

            break;
        }
        }
    }

    rep(i, N)
    {
        rep(j, N)
        {
            if (find(g.at(i).begin(), g.at(i).end(), j) != g.at(i).end())
            {
                cout << "Y";
            }
            else
            {
                cout << "N";
            }
        }

        cout << endl;
    }

    return 0;
}
