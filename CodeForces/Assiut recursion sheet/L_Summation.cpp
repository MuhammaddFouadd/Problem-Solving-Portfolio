#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

#define ll long long
#define in(v)                         \
    for (int i = 0; i < v.size(); ++i) \
    {                                  \
        cin >> v[i];                   \
    }
#define frp(n) for (int i = 0; i < (n); ++i)
#define frm(n) for (int i = (n); i > -1; --i)
/*








*/
ll recurse(const vector <ll> &nums , int idx)
{
    if (idx >= nums.size())
        return 0;

    return nums[idx]+recurse(nums,idx+1);
}

void solve()
{
    ll n;
    cin >> n;

    vector <ll> nums(n) ;
    in(nums);
    cout << recurse(nums,0);
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