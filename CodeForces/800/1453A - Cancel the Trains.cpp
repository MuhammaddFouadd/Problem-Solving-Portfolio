#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ans;

    while (n--)
    {
        int m, k;
        cin >> m >> k;

        vector<int> a(100, 0);
        for (int i = 0; i < m + k; ++i)
        {
            int x;
            cin >> x;
            a[x - 1]++;
        }

        int cnt = 0;
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] > 1)
            {
                cnt++;
            }
        }

        ans.push_back(cnt);
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}