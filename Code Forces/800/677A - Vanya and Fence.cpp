#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n{}, h{}, w{};
    vector<int> A;

    cin >> n >> h;

    if ((1 <= n && n <= 1000) && (1 <= h && h <= 1000))
    {
        while (n--)
        {
            int l;
            cin >> l;

            if (1 <= l && l <= 2 * h)
                A.push_back(l);
        }
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > h)
        {
            w++;
            w++;
        }
        else
            w++;
    }

    cout << w;

    return 0;
}