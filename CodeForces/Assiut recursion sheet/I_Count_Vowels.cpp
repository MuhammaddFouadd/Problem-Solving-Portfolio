#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

#define ll long long
#define get(v)                         \
    for (int i = 0; i < v.size(); ++i) \
    {                                  \
        cin >> v[i];                   \
    }
#define frp(n) for (int i = 0; i < (n); ++i)
#define frm(n) for (int i = (n); i > -1; --i)
/*








*/
int cnt{};
int recurse(const string &s, int idx)
{
    if (idx >= s.size())
        return cnt;

    char c = tolower(s[idx]);

    if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i')
    {
        ++cnt;
    }

    recurse(s, idx + 1);
    return cnt;
}

void solve()
{
    string s;
    getline(cin,s);
    cout << recurse(s, 0);
}

int main()
{

    // freopen("in.txt", "rt", stdin);
    // freopen("out.txt", "rt", stdout);

    int t = 1;
    // cin >> t ;

    while (t--)
    {
        solve();
    }

    return 0;
}