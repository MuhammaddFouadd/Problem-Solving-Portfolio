#include <iostream>
#include <queue>
#include <deque>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    priority_queue<long long> pq;
    long long life = 0;
    long long potions = 0;

    while (n--)
    {
        long long x;
        cin >> x;
        life += x;
        potions++;

        if (x < 0)
        {
            pq.push(-x);
        }

        if (life < 0)
        {
            life += pq.top();
            pq.pop();
            potions--;
        }
    }
    cout << potions << endl;
    return 0;
}