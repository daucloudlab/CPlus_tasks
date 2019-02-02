#include<iostream>
using std::cout ;
using std::endl ;

int main(){
    int a(12) ;
    int b{012} ;
    int c={0x12} ;

    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    cout << "c = " << c << endl ;

    cout << "-----------------" << endl ;

    cout << std::hex << "a = " << a << endl ;
    cout << std::oct << "b = " << b << endl ;
    cout << std::dec << "c = " << c << endl ;

    return 0 ;
}