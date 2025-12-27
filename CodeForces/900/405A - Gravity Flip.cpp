#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n{}, ar[100], m{};
    multiset<int> column;

    cin >> n;
    m = n;

    while (m--)
    {
        int i;
        cin >> i;
        column.insert(i);
    }

    for (int c : column)
    {
        cout << c;
        --n;
        if (n)
            cout << " ";
    }

    return 0;
}