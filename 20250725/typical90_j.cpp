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
        ll c, p;
        cin >> c >> p;

        if (c == 1)
        {
            s1.emplace_back(s1.back() + p);
            s2.emplace_back(s2.back());
        }
        else
        {
            s1.emplace_back(s1.back());
            s2.emplace_back(s2.back() + p);
        }
    }

    ll q;
    cin >> q;
    rep(i, q)
    {
        ll l, r;
        cin >> l >> r;

        cout << s1.at(r) - s1.at(l - 1) << ' ' << s2.at(r) - s2.at(l - 1) << endl;
    }

    return 0;
}
