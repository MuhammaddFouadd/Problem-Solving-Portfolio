#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <chrono>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <deque>
#include <set>
#include <bitset>
#include <unordered_set>
#include <map>
#include <queue>
#include <stack>
using namespace std;

template <typename T>
void read_vector(vector<T> &v, int n)
{
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

#define cin(v)         \
    for (auto &el : v) \
        cin >> el;

#define cout(v)            \
    for (auto el : v)      \
        cout << el << " "; \
    cout << '\n';

#define int long long
#define pb push_back

#define F first
#define S second

#define mp make_pair
#define pii pair<int, int>

#define lop(i, a, b) for (int i = a; i <= b; i++)
#define lopr(i, a, b) for (int i = a; i >= b; i--)
#define fr(i, b) for (int i = 0; i < b; i++)

#define vi vector<int>
#define vvi vector<vector<int>>

#define prefix(v)                      \
    for (int i = 1; i < v.size(); i++) \
    {                                  \
        v[i] += v[i - 1];              \
    }

#define sum(v) accumulate(v.begin(), v.end(), 0LL)

#define lb lower_bound
#define ub upper_bound

#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

#define yes cout << "Yes";
#define no cout << "No";

vector<int> a, aPre, b;

// bool solve(int a, int b = 0, int c = 0, vector<int> &d)
// {
// }

void operate()
{
    int n, m, ans{};
    cin >> n >> m;
    read_vector(a, n);
    read_vector(b, m);

    aPre.push_back(a[0]);
    for (int i = 1; i < n; ++i)
    {
        aPre.push_back(aPre[i - 1] + a[i]);
    }

    for (size_t i = 0; i < m; i++)
    {
        auto it1 = lower_bound(all(aPre), b[i]); 

        if (it1 == aPre.begin())
        {
            cout << (it1 - aPre.begin()+1) << " " << b[i] << endl;
        }
        else
        {
            cout << (it1 - aPre.begin()+1) << " " << b[i] - *(it1 - 1) << endl;
        }
    }
}

signed main()
{
    fastIO;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        operate();
    }
    return 0;
}