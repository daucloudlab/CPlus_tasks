#include<iostream>
using namespace std ;

int main(){
    int a ;

    double rez ;

    cin >> a ;
    rez = float(a) / 2 ;
    cout << rez << endl; 

    rez = static_cast<float>(a) / 2 ;
    cout << rez << endl ;

    return 0 ;
}