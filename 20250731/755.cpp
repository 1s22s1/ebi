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

ll N;
ll answer = 0;

void solve(ll n, ll use)
{
    if (n > N)
    {
        return;
    }

    if (use == 0b111)
    {
        answer++;
    }

    solve(n * 10 + 7, use | 0b100);
    solve(n * 10 + 5, use | 0b010);
    solve(n * 10 + 3, use | 0b001);
}

int main()
{
    init();

    cin >> N;

    solve(0, 0b000);

    cout << answer << endl;

    return 0;
}
