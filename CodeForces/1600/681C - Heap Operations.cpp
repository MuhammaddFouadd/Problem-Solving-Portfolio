#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Q;
    cin >> Q;

    multiset<int> ms;
    vector<string> v;

    while (Q--)
    {
        string s;
        cin >> s;

        if (s == "insert")
        {
            int x;
            cin >> x;
            ms.insert(x);
            v.push_back("insert " + to_string(x));
        }
        else if (s == "removeMin")
        {
            if (ms.empty())
            {
                v.push_back("insert 0");
                ms.insert(0);
            }
            ms.erase(ms.begin());
            v.push_back("removeMin");
        }
        else if (s == "getMin")
        {
            int x;
            cin >> x;
            while (!ms.empty() && *ms.begin() < x)
            {
                ms.erase(ms.begin());
                v.push_back("removeMin");
            }
            if (ms.empty() || *ms.begin() > x)
            {
                ms.insert(x);
                v.push_back("insert " + to_string(x));
            }
            v.push_back("getMin " + to_string(x));
        }
    }

    cout << v.size() << '\n';
    for (const auto &cmd : v)
    {
        cout << cmd << '\n';
    }

    return 0;
}