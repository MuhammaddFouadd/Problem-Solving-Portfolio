#include <iostream>
#include <set>
using namespace std;

int main()
{
    string user1;
    cin >> user1;

    set<char> user2;

    for (int n = 0; n < user1.size(); ++n)
    {
        user2.insert(user1[n]);
    }

    if (user2.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}