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

ll N, M;

void solve(vector<ll> vec, ll count)
{
    if (count == N)
    {
        for (auto e : vec)
        {
            cout << e << ' ';
        }
        cout << endl;
    }
    else
    {
        for (ll i = vec.empty() ? 1 : vec.back() + 1; i <= M; i++)
        {
            vec.emplace_back(i);
            solve(vec, count + 1);
            vec.pop_back();
        }
    }
}

int main()
{
    init();

    cin >> N >> M;

    solve({}, 0);

    return 0;
}
