#include<iostream>
#include<cmath>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include<vector>
#include<string>
#include <cctype>
#include <functional>
using namespace std;

int main (){

    int i , m{} , c {} , l{};
    cin >> i ;

    m=i ;

    for ( int j = 1 ; j <= i ; ++j) {
        c+=j ;
        if (m >= c) {
            m-=c ;
            ++l ;
        }
    }

    cout << l ;
}