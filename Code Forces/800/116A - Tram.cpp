#include <iostream>
#include <deque>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>

#define open freopen("input.txt", "r", stdin);
#define close freopen("output.txt", "w", stdout);
#define SpeedUp                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

#define forp(m, n) for (auto i = m; i < n; ++i)
#define forn(m, n) for (auto i = m; i >= n; --i)
#define fSTL(x) for (auto it : x)

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define in(x) cin >> x
#define out(x) cout << x

using namespace std;

int tram()
{
    int n;
    in(n);

    int maxi = INT_MIN, passegers = 0;

    for (int i = 0; i < n; ++i)
    {
        int a, b;
        in(a);
        in(b);
        passegers += b - a;
        maxi = max(maxi, passegers);
    }

    return maxi;
}

int main(void)
{
    // open
    // close
    SpeedUp

            cout
        << tram();

    return 0;
}