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

void recurse(int space , int star)
{
    if (star < 1)
        return;
    
        for (int i = 0 ; i < space ; ++i){
            cout << " ";
        }
        for (int i = 0 ; i < star; ++i){
            cout << "*";
        }
        cout <<endl;
        recurse(space+1,star-2);
}

void solve()
{
    int n ; 
    cin >> n;

    recurse(0 , 2*n-1);
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