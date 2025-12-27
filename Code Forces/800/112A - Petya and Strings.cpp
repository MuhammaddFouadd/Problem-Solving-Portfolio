#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string fs, ls;
    cin >> fs >> ls;

    bool equal = 1;
    for (int i = 0; i < fs.size(); ++i)
    {

        if (tolower(fs[i]) < tolower(ls[i]))
        {
            cout << "-1";
            equal = 0;
            break;
        }
        else if (tolower(fs[i]) > tolower(ls[i]))
        {
            cout << "1";
            equal = 0;
            break;
        }
    }

    if (equal)
        cout << "0";

    return 0;
}
