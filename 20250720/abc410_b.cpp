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

    ll N, Q;
    cin >> N >> Q;

    vector<ll> haco(N, 0);

    rep(i, Q)
    {
        ll X;
        cin >> X;

        if (X == 0)
        {
            auto min_it = min_element(haco.begin(), haco.end());
            auto index = distance(haco.begin(), min_it);

            cout << index + 1 << ' ';

            haco.at(index)++;
        }
        else
        {
            cout << X << ' ';
            X--;
            haco.at(X)++;
        }
    }

    cout << endl;

    return 0;
}
