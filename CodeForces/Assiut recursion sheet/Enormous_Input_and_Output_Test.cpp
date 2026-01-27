#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        cout << n * m << "\n";
    }

    return 0;
}