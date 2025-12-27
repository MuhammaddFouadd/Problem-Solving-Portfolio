#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int no, group{}, pos1{}, pos2{};
    cin >> no;

    while (no--)
    {
        cin >> pos2;

        if (pos1 != pos2)
            group += 1;

        pos1 = pos2;
    }

    cout << group;
    return 0;
}