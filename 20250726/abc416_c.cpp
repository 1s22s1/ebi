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

    ll N, K, X;
    cin >> N >> K >> X;

    vector<string> vec;
    rep(i, N)
    {
        string s;
        cin >> s;
        vec.emplace_back(s);
    }

    sort(vec.begin(), vec.end());

    for (ll i = K - 1; i >= 1; i--)
    {
        ll div = (int)pow(N, i);
        ll quotient = X / div;
        ll remainder = X % div;

        if (remainder == 0)
        {
            cout << vec.at(quotient - 1);
            if (K == 2)
            {
                cout << vec.back();
                break;
            }
            else
            {
                X = remainder;
            }
        }
        else
        {
            cout << vec.at(quotient);
            X = remainder;
        }
    }

    cout << endl;

    return 0;
}
