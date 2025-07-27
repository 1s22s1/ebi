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

    bool circle_ok = true;

    for (auto c : S)
    {
        if (c == '#')
        {
            cout << '#';
            circle_ok = true;
        }
        else
        {
            if (circle_ok)
            {
                cout << 'o';
                circle_ok = false;
            }
            else
            {
                cout << '.';
            }
        }
    }

    cout << endl;

    return 0;
}
