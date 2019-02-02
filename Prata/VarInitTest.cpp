#include<iostream>
using namespace std ;

int main(){
    int a(12) ; // C++ Style
    int b = 34 ; // C-style
    int d = {24} ; //C++11 Style
    int e {25} ; // C++11 Style
    int f{} ; //C++11 Style

    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    int c ;
    cout << "c = " << c << endl ;
    cout << "d = " << d << endl ;
    cout << "e = " << e << endl ;
    cout << "f = " << f << endl ;
    return 0 ;
}