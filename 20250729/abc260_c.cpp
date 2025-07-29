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

ll N, X, Y;

ll solve(ll level, bool is_red)
{
    if (level == 1)
    {
        return is_red ? 0 : 1;
    }

    if (is_red)
    {
        return solve(level - 1, true) + solve(level, false) * X;
    }
    else
    {
        return solve(level - 1, true) + solve(level - 1, false) * Y;
    }
}

int main()
{
    init();

    cin >> N >> X >> Y;

    cout << solve(N, true) << endl;

    return 0;
}
