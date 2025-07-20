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

    vector<ll> A;
    rep(i, N)
    {
        A.emplace_back(i + 1);
    }

    ll d = 0;

    rep(i, Q)
    {
        ll type;
        cin >> type;

        switch (type)
        {
        case 1:
            ll p, x;
            cin >> p >> x;
            A.at((p - 1 + d) % N) = x;

            break;
        case 2:
            ll a;
            cin >> a;
            cout << A.at((a - 1 + d) % N) << endl;

            break;
        case 3:
            ll k;
            cin >> k;
            d += k;

            break;
        }
    }

    return 0;
}
