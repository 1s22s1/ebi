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

    ll N, L, R;
    string S;

    cin >> N >> L >> R >> S;

    bool ok = true;
    for (int i = L - 1; i <= R - 1; i++)
    {
        if (S.at(i) != 'o')
        {
            ok = false;
        }
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
