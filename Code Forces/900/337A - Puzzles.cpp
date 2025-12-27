#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int s, m;
    cin >> s >> m;

    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int minDif = INT_MAX;
    for (int i = 0; i + s - 1 < m; i++)
    {
        minDif = min(minDif, a[i + s - 1] - a[i]);
    }

    cout << minDif << '\n';
    return 0;
}