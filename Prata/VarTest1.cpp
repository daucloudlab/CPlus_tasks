#include<iostream>
#include<climits>
#define ZERO 0

using namespace std ;

int main(){
    short sam = SHRT_MAX ;
    unsigned short sue = sam ;

    cout << "sam = " << sam << endl ;
    cout << "sue = " << sue << endl ;

    sam = sam + 1 ;
    sue = sue + 1 ;

    cout << "sam = " << sam << endl ;
    cout << "sue = " << sue << endl ;

    sam = ZERO ;
    sue = sam ;

    sam = sam - 1 ;
    sue = sue - 1 ;

    cout << "sam = " << sam << endl ;
    cout << "sue = " << sue << endl ;

    return 0 ;
}