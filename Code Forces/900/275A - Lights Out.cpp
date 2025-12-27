#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool a[3][3]{{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int s[3][3]{};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (s[i][j] % 2 != 0)
            {
                a[i][j] = !a[i][j];

                if (i + 1 < 3)
                    a[i + 1][j] = !a[i + 1][j];

                if (i - 1 >= 0)
                    a[i - 1][j] = !a[i - 1][j];

                if (j + 1 < 3)
                    a[i][j + 1] = !a[i][j + 1];

                if (j - 1 >= 0)
                    a[i][j - 1] = !a[i][j - 1];
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}