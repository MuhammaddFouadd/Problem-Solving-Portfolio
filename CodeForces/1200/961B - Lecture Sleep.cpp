#include <iostream>
#include <vector>
#include <math.h>
#include <climits>

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void IO()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
}

#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1, 0);
    vector<bool> t(n + 1);

    for (int i = 1; i < n + 1; ++i)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n + 1; ++i)
    {
        int flag;
        cin >> flag;

        if (flag == 1)
            t[i] = true;
        else
            t[i] = false;
    }

    vector<int> sleep(n + 1, 0);

    for (int i = 1; i < n + 1; ++i)
    {
        if (!t[i])
            sleep[i] = a[i];
    }

    int sum = LLONG_MIN;

    vector<int> preSleep(n + 1, 0);
    for (int i = 1; i < n + 1; ++i)
    {
        preSleep[i] += preSleep[i - 1] + sleep[i];
    }

    for (int i = 1; i < n + 1; ++i)
    {

        if (i + k - 1 > n)
            break;
        sum = max(sum, preSleep[i + k - 1] - preSleep[i - 1]);
    }

    for (int i = 1; i < n + 1; ++i)
    {
        if (t[i])
            sum += a[i];
    }

    cout << sum;
}

signed main()
{
    fastIO();

#ifndef ONLINE_JUDGE
    IO();
#endif

    solve();

    return 0;
}
