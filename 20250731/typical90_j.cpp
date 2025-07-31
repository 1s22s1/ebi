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

    vector<ll> s1 = {0}, s2 = {0};
    rep(i, N)
    {
        ll C, P;
        cin >> C >> P;

        if (C == 1)
        {
            s1.emplace_back(s1.back() + P);
            s2.emplace_back(s2.back());
        }
        else
        {
            s1.emplace_back(s1.back());
            s2.emplace_back(s2.back() + P);
        }
    }

    ll Q;
    cin >> Q;
    rep(i, Q)
    {
        ll L, R;
        cin >> L >> R;

        cout << s1.at(R) - s1.at(L - 1) << ' ' << s2.at(R) - s2.at(L - 1) << endl;
    }

    return 0;
}
