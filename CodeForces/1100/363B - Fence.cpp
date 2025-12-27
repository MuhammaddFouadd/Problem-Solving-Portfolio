#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    int prefix[n];
    prefix[0] = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        prefix[i + 1] = prefix[i] + arr[i + 1];
    }

    int mini = prefix[k - 1];
    int comp;
    for (int i = k; i < n; i++)
    {
        comp = prefix[i] - prefix[i - k];
        if (comp < mini)
        {
            mini = comp;
            index = i - k + 1;
        }
    }
    cout << index + 1;

    return 0;
}
