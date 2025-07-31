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
    vector<ll> An;

    cin >> N;
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
        // 単調非減少
        while (j < N - 1 && An.at(j) >= An.at(j + 1))
        {
            j++;
        }

        ll k = i;
        // 単調非増加
        while (k < N - 1 && An.at(k) <= An.at(k + 1))
        {
            k++;
        }

        answer++;
        i = max(j + 1, k + 1);
    }

    cout << answer << endl;

    return 0;
}
