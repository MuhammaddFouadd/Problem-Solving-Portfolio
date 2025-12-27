#include <iostream>
using namespace std;

int main()
{

    int e{}, p{0}, o{0}, o2{0}, un{0};
    cin >> e;

    while (e--)
    {
        cin >> o;

        if (o == -1 && p == 0)
        {
            un += 1;
        }

        else if (o != -1 && e == 0)
        {
            break;
        }

        else if (o == -1 && p != 0)
        {
            p--;
        }

        else
        {
            p += o;
        }
    }

    cout << un;

    return 0;
}