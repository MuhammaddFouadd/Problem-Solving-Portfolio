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
void calc(const vector<int> &nums, vector<int> &subsets, int index, const int &maxId, ll &totalSum)
{
    if (index == maxId)
    {
        if (!subsets.size())
            return ;
            
        int subSum = 0, len = subsets.size();

        frp(len)
        {
            subSum |= subsets[i];
        }
        totalSum+=subSum;
        return ;
    }

    subsets.push_back(nums[index]);
    calc (nums, subsets , index+1 , maxId , totalSum);
    
    subsets.pop_back();
    calc (nums, subsets , index+1 , maxId , totalSum);

}

void solve()
{
    int n;

    if (!(cin >> n))
        return;

    vector<int> nums(n);
    get(nums);

    vector<int> subsets;
    ll totalSum{};

    calc(nums, subsets, 0, n, totalSum);

    cout << totalSum;
}

int main()
{

    int t = 1;
    // cin >> t ;

    while (t--)
    {
        solve();
    }

    return 0;
}