#include <iostream>
using namespace std ;
int gcd(int a, int b){
    if (b == 0)
        return a ;
    else
        return gcd(b, a%b) ;
}

int main(){
    int a, b ;
    cin >> a >> b ;
    if (a == 1 && b == 1)
        cout << 1 << endl ;
    else if (gcd(a, b) != 1)
        cout << 1 << endl ;
    else
        cout << 0 << endl ;

    
    return 0 ;
}