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

    ll offset = 0;

    rep(i, Q)
    {
        ll type, p, x, k;
        cin >> type;

        switch (type)
        {
        case 1:
            cin >> p >> x;
            A.at((p - 1 + offset) % N) = x;

            break;
        case 2:
            cin >> p;
            cout << A.at((p - 1 + offset) % N) << endl;

            break;
        case 3:
            cin >> k;
            offset += k;

            break;
        }
    }

    return 0;
}
