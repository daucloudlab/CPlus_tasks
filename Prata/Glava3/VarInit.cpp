#include<iostream>

int main(){
    using namespace std ;

    int a = 12 ;
    int b (13) ;
    int c = {14} ;
    int d {15} ;
    int e {} ;

    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    cout << "c = " << c << endl ;
    cout << "d = " << d << endl ;
    cout << "e = " << e << endl ;

    return 0 ;
}