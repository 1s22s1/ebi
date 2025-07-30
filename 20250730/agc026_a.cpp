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

    vector<ll> An;

    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    ll answer = 0;

    ll i = 0;
    while (i < N)
    {
        ll j = i;
        while (j < N && An.at(i) == An.at(j))
        {
            j++;
        }

        answer += (j - i) / 2;
        i = j;
    }

    cout << answer << endl;

    return 0;
}
