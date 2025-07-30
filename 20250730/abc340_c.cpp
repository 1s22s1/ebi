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

ll answer = 0;
map<ll, ll> memo;

ll solve(ll n)
{
    if (n == 1)
    {
        return 0;
    }

    if (memo.count(n))
    {
        return memo[n];
    }

    return memo[n] = solve(n / 2) + solve((n + 1) / 2) + n;
}

int main()
{
    init();

    ll N;
    cin >> N;

    cout << solve(N) << endl;

    return 0;
}
