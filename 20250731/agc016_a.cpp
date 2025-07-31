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

    string s;
    cin >> s;

    ll answer = 101;

    for (char c = 'a'; c <= 'z'; c++)
    {
        ll i = 0;
        ll max_it = 0;
        while (i < s.size())
        {
            ll j = i;
            while (j < s.size() && s.at(j) != c)
            {
                j++;
            }

            max_it = max(max_it, j - i);
            i = j + 1;
        }

        answer = min(answer, max_it);
    }

    cout << answer << endl;

    return 0;
}
