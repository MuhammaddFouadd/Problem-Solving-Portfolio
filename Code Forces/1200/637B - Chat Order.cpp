#include <iostream>
#include <unordered_map>
#include <list>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    list<string> CL;
    unordered_map<string, list<string>::iterator> PM;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (PM.count(name))
        {
            CL.erase(PM[name]);
        }

        CL.push_front(name);
        PM[name] = CL.begin();
    }

    for (auto name : CL)
    {
        cout << name << endl;
    }

    return 0;
}