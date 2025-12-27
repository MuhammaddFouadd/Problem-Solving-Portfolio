#include <iostream>
using namespace std;

int main()
{
    int n{}, a{}, d{};
    cin >> n;

    string w{};
    cin >> w;

    for (int l = 0; l < w.size(); ++l)
    {
        if (w[l] == 'A')
            a++;
        else
            d++;
    }

    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}