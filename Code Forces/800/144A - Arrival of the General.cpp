#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> numbers(size);

    for (int i = 0; i < size; ++i)
    {
        cin >> numbers[i];
    }

    // إيجاد مؤشر أكبر عنصر
    int maxIdx = 0;
    for (int i = 1; i < size; ++i)
    {
        if (numbers[i] > numbers[maxIdx])
        {
            maxIdx = i;
        }
    }

    // إيجاد مؤشر أصغر عنصر
    int minIdx = size - 1;
    for (int i = size - 2; i >= 0; --i)
    {
        if (numbers[i] < numbers[minIdx])
        {
            minIdx = i;
        }
    }

    // حساب عدد التبديلات
    int swaps = (maxIdx > minIdx) ? (maxIdx + (size - 1 - minIdx - 1)) : (maxIdx + (size - 1 - minIdx));

    cout << swaps << endl;

    return 0;
}