#include<iostream>
using namespace std ;

int main(){
    int a = 5 ;
    int *pa = &a ;
    int &aRef = a;

    cout << "pa = " << pa << endl ;
    cout << "*pa = " << *pa << endl ;
    cout << "aRef = " << aRef << endl ;
    cout << "&aRef = " << &aRef << endl; 
    return 0 ;
}