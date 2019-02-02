#include<iostream>
using namespace std ;

void foo(int *pa, int *pb){
    int temp = *pa ;
    *pa = *pb ;
    *pb = temp ;
}
int main(){
    int a = 5 ;
    int b = 6 ;

    cout << "a = " << a << endl; 
    cout << "b = " << b << endl ;

    foo(&a, &b) ;

    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    
    return 0 ;
}