#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <set>
#include <algorithm>
#include <queue>
 
using namespace std;
 
#define int long long
#define br << '
'
#define sp << ' '
 
void solve()
{
   int n, s;
   cin >> n >> s;
 
   vector<int> items(n);
   for (auto &i : items) cin >> i;
 
   // sort (items.begin(),items.end());
 
   auto can = [&](int x) -> int{
 
      vector <int> price (n);
      for(int i = 0 ; i < n ; ++ i){
         price [i]= items[i]+(i+1)*x;
      }
 
      sort (price.begin(),price.end());
 
      int sum =0 ;
      for(int i = 0 ; i < x ; ++ i){
         sum += price[i];
         if (sum > s) return s+1;
      }
      
      return sum ;
   };
 
   int st = 0, ed = n, ans = 0, cost = -1 , finalCost = -1;
   while (st <= ed)
   {
      int mid = st + (ed - st) / 2;
      cost = can(mid);
      if (cost <= s)
      {
         ans = mid;
         finalCost = cost;
         
         st = mid +1;
      }
      else
      {
         ed = mid -1 ;
      }
   }
 
   cout << ans sp << finalCost;
}
 
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
 
 
   int t = 1;
   // cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}