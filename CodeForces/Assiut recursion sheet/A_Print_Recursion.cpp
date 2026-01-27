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

void recurse (int n){
    if (n<1){
        return;
    }
    cout << "I love Recursion" <<endl;
    recurse(n-1);
}

void solve()
{
    int n ;
    cin >> n ;

    recurse (n);
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