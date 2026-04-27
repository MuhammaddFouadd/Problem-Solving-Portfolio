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
 
void solve() {
   string s; 
   cin >> s; 
 
   int nb, ns, nc ;
   cin >> nb  >> ns >> nc;
   
   int pb, ps, pc ;
   cin >> pb >> ps >> pc;
 
   int money ;
   cin >> money;
 
   int sand = 0 , sdb= 0  , sds = 0 , sdc= 0;
   for (auto e:s){
      if (e =='B')
         ++sdb;
      else if (e == 'S')
         ++sds;
      else
         ++sdc;
   }
 
   auto can = [&](int mid)-> bool{
      int costB = max(0LL, mid * sdb - nb) * pb;
      int costS = max(0LL, mid * sds - ns) * ps;
      int costC = max(0LL, mid * sdc - nc) * pc;
 
      return money>=(costB+costS+costC);
   };
 
   int st =0 , ed = 1e12+101 , ans= 0;
   while (st<=ed){
      int mid = st + (ed-st)/2;
      if(can(mid)){
         ans = mid ;
         st = mid +1;
      }else{
         ed = mid -1;
      }
   }
 
   cout << ans;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
#ifndef ONLINE_JUDGE
freopen("in.txt", "rt", stdin);
freopen("out.txt", "wt", stdout);
#endif
 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}