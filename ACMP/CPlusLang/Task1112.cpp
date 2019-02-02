#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;

    int num1 = n % 10 ;
    int num2 = (n / 10) % 10 ;
    int num3 = n / 100 ;

    cout << (num1 + num2 + num3) << endl ;
    
    return 0 ;
}