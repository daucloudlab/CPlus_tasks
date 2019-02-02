#include<iostream>

using namespace std ;

template <typename T>
void Swap(T &a, T &b){
    T temp = a ;
    a = b ;
    b = temp ;
}

int main(){
    int a = 12 ;
    int &aref = a ;

    cout << "aref = " << aref << endl ;
    aref =45 ;
    cout << "aref = " << aref << endl ;

    int l = 10, m = 20 ;
    cout << "l = " << l << endl ;
    cout << "m = " << m << endl ;
    Swap(l, m) ;
    cout << "l = " << l << endl ;
    cout << "m = " << m << endl ;

    double k = 23.6, n = 89.5 ;
    cout << "k = " << k << endl ;
    cout << "n = " << n << endl ;
    Swap(k, n) ;
    cout << "k = " << k << endl ;
    cout << "n = " << n << endl ;

    return 0 ;
}