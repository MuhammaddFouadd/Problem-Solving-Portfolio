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
   int n , m , k , friends= 0;
   cin >> n >> m >> k ;
   
   vector <int> players(m+1) ; 
   for (auto &p : players)cin >> p;
 
   int he = players[m];
   for (int i= 0 ; i < m;++i){
      int cnt = 0 , player = players[i];
      
      for (int j = 0; j < 21;++j ){
         if (((player & (1<<j)) ^ (he & (1<<j))))
            ++cnt;
      }
      if (cnt <= k )
         ++friends;
   }
 
   cout << friends;
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