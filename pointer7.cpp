#include<iostream>
using std::cout ;
using std::endl ;

int main(){
    int *pa = new int ;

    cout << "pa = " << pa << endl ;
    *pa = 10 ;
    cout << "*pa = " << *pa << endl ;

    delete pa ;

    cout << "pa = " << pa << endl ;
    cout << "*pa = " << *pa << endl ;
    *pa = 12 ;
    cout << "*pa = " << *pa << endl ;
    
    delete pa ;
    pa = nullptr ;
    
    cout << "pa = " << pa << endl ;
    return 0 ;
}