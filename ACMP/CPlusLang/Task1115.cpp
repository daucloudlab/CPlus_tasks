#include <iostream>
using namespace std ;

int main(){
    int n, k ;
    cin >> k >> n ;

    int num1, num2, num3 ;
    num1 = n / k ;
    num2 = n % k ;
    if (num2 == 0)
        num3 = 0 ;
    else
        num3 = k - num2 ; 

    cout << num1 << " " << num2 << " " << num3 << endl ;

    return 0 ;
}