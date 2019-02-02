#include <iostream>
#include <cmath>

using namespace std ;

int main(){
    int a, b ;
    cin >> a >> b ; 

    // cout << a % abs(a-b) + b % abs(a-b) + 1 ;
    // cout << a % (a-b) + b % (a-b) + 1 ;
    // a  = bc
    // (a div b ) % c + 1 ;
    // cout << (a / b) % 2 + 1 << endl ;

    if (a < b){
        int temp = b ;
        b = a ;
        a = temp ;
    }
    if (a % b == 0)
        cout << 1 ;
    else
        cout << 0 ;
        
    return 0 ;
}