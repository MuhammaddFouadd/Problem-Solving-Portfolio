#include <iostream>
using namespace std;

int main()
{
    int n = 0, c = 0;
    cin >> n;
    c += n / 100;
    n %= 100;
    c += n / 20;
    n %= 20;
    c += n / 10;
    n %= 10;
    c += n / 5;
    n %= 5;
    c += n / 1;
    cout << c;

    return 0;
}
 