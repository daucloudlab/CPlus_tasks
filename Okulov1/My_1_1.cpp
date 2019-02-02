#include<iostream>
#include<cmath>
using std::cout ;
using std::cin ;
using std::endl ;

int main(){ 
    int res ;

    res = 19 % 4 ;
    cout << res << endl ;

    res = -19 % 4 ;
    cout << res << endl ;

    res = 19 % -4 ;
    cout << res << endl ;

    res = -19 % -4 ;
    cout << res << endl ;

    return 0 ;
}