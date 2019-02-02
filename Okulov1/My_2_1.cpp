#include<iostream>
using namespace std ;

int main(){
    int a, one, dec, hun, rez ;

    cin >> a ;

    one = a % 10 ;
    cout << "one " << one << endl ;

    dec = (a / 10) % 10 ;
    cout << "dec " << dec << endl ;

    hun = a / 100 ;
    cout << "hun " << hun << endl ;

    rez = 100 * hun + dec * 10 + one ;
    cout << "rez " << rez << endl ;

    return 0 ;
}