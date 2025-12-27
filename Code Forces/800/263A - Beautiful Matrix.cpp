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

    int x , y ;
    for( int i = 0  ;  i < 5 ; ++i ) {
        for (int j = 0 ; j < 5 ; ++j) {
            int d ;
            cin >> d;
            if (d == 1) {
                x= i ;
                y= j ;

                break ;
            }
        }
    }

    cout << (abs(2-x)+abs(2-y)) ;
}