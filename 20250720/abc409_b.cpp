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

    vector<ll> A(N);
    rep(i, N)
    {
        cin >> A.at(i);
    }

    ll answer = -1;

    rep(i, N + 1)
    {
        ll count = 0;
        for (auto a : A)
        {
            if (i <= a)
            {
                count++;
            }
        }

        if (i <= count)
        {
            answer = max(answer, i);
        }
    }

    cout << answer << endl;

    return 0;
}
