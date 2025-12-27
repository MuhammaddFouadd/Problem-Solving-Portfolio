#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/in.txt", "rt", stdin);
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/out.txt", "wt", stdout);

    int n;
    cin >> n;
    vector<int> neg, pos, zero;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            neg.push_back(x);
        else if (x > 0)
            pos.push_back(x);
        else
            zero.push_back(x);
    }

    vector<int> set1, set2, set3;

    // Always move one negative number to set1
    set1.push_back(neg.back());
    neg.pop_back();

    // Make sure set2 has product > 0
    if (pos.size() >= 2)
    {
        // OK, just use positives
        for (int x : pos)
            set2.push_back(x);
    }
    else
    {
        // Add two negatives if not enough positives
        set2.insert(set2.end(), pos.begin(), pos.end());
        if (neg.size() >= 2)
        {
            set2.push_back(neg.back());
            neg.pop_back();
            set2.push_back(neg.back());
            neg.pop_back();
        }
    }

    // The rest goes to set3
    set3.insert(set3.end(), neg.begin(), neg.end());
    set3.insert(set3.end(), zero.begin(), zero.end());

    // Output
    for (auto &v : {set1, set2, set3})
    {
        cout << v.size();
        for (int x : v)
            cout << " " << x;
        cout << endl;
    }

    return 0;
}

 