#include<iostream>
using namespace std ;
int main(){
    int a = 5 ;
    int *px = &a ;
    int *px2 = &a ;

    *px2 = 2 ;

    cout << a << endl ;

    return 0 ;
}