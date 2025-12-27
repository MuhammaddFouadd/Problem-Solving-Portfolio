#include <iostream>
#include <bits/stdc++.h>

using namespace std ;

int main(){
    long long n {} , b {} ,d {} ;
    cin >> n  >> b >> d ;

    long long  waste {} , collect {};
    for (long long i = 0 ; i < n ; ++i) {
        long long  s {} ;
        cin >>  s ;
        if (s <= b) {
            waste += s;
            if (waste > d) {
                collect ++;
                waste = 0 ;
            }
        }
    }

    cout << collect ;
    return 0 ;
}