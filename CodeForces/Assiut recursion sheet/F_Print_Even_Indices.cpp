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

void recurse(const vector<int> &nums, int idx)
{
    if (idx<0)
        return;

    cout << nums[idx] << " ";
    recurse (nums,idx-2);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> nums (n);
    get(nums);

    if (n % 2 == 0)
        recurse(nums, nums.size() - 2);
    else
        recurse(nums, nums.size() - 1);
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