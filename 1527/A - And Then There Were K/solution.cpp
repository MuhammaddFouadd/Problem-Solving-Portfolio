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
   int n  ,res=1;
   cin >> n ;
 
   if (n==1){
      cout << 0 br; 
      return; 
   }else if ( n == 2){
      cout << 1 br; 
      return ;
   }
 
   while (res*2<=n)
   {
      res*=2;
   }
 
   cout << res-1  br;
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}