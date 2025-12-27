#include <iostream>
using namespace std;

int main()
{

    int fi{}, se{}, th{}, fo{}, calo{};
    string sq;

    cin >> fi >> se >> th >> fo >> sq;

    for (int i = 0; i < sq.size(); ++i)
    {

        if ((char)sq[i] == '1')
        {
            calo += fi;
        }
        else if ((char)sq[i] == '2')
        {
            calo += se;
        }
        else if ((char)sq[i] == '3')
        {
            calo += th;
        }
        else if ((char)sq[i] == '4')
        {
            calo += fo;
        }
    }

    cout << calo;

    return 0;
}