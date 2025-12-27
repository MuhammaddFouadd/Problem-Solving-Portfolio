#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    int n{}, m{}, e{}, i{};
    char c;
    vector<char> s;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> c;
        s.push_back(c);
    }

    while (i < s.size() - 1)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(s.begin() + i + 1);
            m += 1;
        }
        else
        {
            i += 1;
        }
    }

    cout << m;

    return 0;
}