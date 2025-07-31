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

    string S;
    cin >> S;

    ll i = 0;
    while (i < S.size())
    {
        ll j = i;
        while (j < S.size() - 1 && !(S.at(j) == 'R' && S.at(j + 1) == 'L'))
        {
            cout << 0 << ' ';
            j++;
        }

        cout << (j + 2 - i) / 2 << ' ';
        cout << (j + 3 - i) / 2 << ' ';

        i = j + 2;
    }

    cout << endl;

    return 0;
}
