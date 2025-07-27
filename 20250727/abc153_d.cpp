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

ll solve(ll h)
{
    if (h == 1)
    {
        return 1;
    }

    return 2 * solve(h / 2) + 1;
}

int main()
{
    init();

    ll H;
    cin >> H;

    cout << solve(H) << endl;

    return 0;
}
