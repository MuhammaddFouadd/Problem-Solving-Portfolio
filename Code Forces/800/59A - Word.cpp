#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int upper{}, lower{};

    for (int w = 0; w < word.size(); ++w)
    {
        if ((int)word[w] > 90)
            lower += 1;
        else
            upper += 1;
    }
    string word2{};

    if (upper <= lower)
    {
        for (int w = 0; w < word.size(); ++w)
        {

            word2 += tolower(word[w]);
        }
    }
    else
    {
        for (int w = 0; w < word.size(); ++w)
        {
            word2 += toupper(word[w]);
        }
    }

    cout << word2;

    return 0;
}