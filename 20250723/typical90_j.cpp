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

    ll N;
    cin >> N;

    vector<ll> c1 = {0};
    vector<ll> c2 = {0};

    rep(i, N)
    {
        ll C, P;
        cin >> C >> P;

        if (C == 1)
        {
            c1.emplace_back(c1.back() + P);
            c2.emplace_back(c2.back());
        }
        else
        {
            c2.emplace_back(c2.back() + P);
            c1.emplace_back(c1.back());
        }
    }

    ll Q;
    cin >> Q;
    rep(i, Q)
    {
        ll L, R;
        cin >> L >> R;

        cout << c1.at(R) - c1.at(L - 1) << ' ' << c2.at(R) - c2.at(L - 1) << endl;
    }

    return 0;
}
