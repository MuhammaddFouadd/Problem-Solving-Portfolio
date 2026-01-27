#include <iostream>
#include <vector>
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

void guess(const vector<string> &dic, string rule, int idx, string password)
{
    if (idx >= rule.size())
    {
        cout << password << endl;
    }
    else
    {
        if (rule[idx] == '0')
        {
            frp(10)
            {
                guess(dic, rule, idx + 1, password + to_string(i));
            }
        }
        else
        {
            frp(dic.size())
            {
                guess(dic, rule, idx + 1, password + dic[i]);
            }
        }
    }
}

void solve()
{

    int n, m;
    while (cin >> n)
    {
        vector<string> dic(n);
        get(dic);

        cin >> m;
        vector<string> rules(m);
        get(rules);

        cout << "--" << endl;
        frp(m)
        {
            guess(dic, rules[i], 0, "");
        }
    }
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