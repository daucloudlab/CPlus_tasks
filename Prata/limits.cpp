#include<iostream>
#include<climits>

using namespace std ;
int main(){
    int n_int = INT_MAX ;
    short n_short = SHRT_MAX ;
    long n_long = LONG_MAX ;
    long long n_llong = LLONG_MAX ;

    cout << "Maximum values: " << endl ;
    cout << "n_int " << n_int << endl ;
    cout << "n_short " << n_short << endl ;
    cout << "n_long " << n_long << endl ;
    cout << "n_llong " << n_llong << endl ;
 
    cout << "------------------------------" << endl ;

    cout << "int is " << sizeof(int) << endl ;
    cout << "short is " << sizeof(n_short) << endl ;
    cout << "long is " << sizeof(long) << endl ;
    cout << "long long is " << sizeof n_llong << endl; 

    cout << "-------------------------------" << endl ;

    cout << "Minimum int is " << INT_MIN << endl ;
    cout << "Bits per byte is " << CHAR_BIT << endl ;
    cout << "Char max " << CHAR_MAX << endl ;
    cout << "UnSigned Char max " << UCHAR_MAX << endl ;

    return 0 ;
}