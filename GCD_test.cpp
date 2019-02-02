#include <iostream>

using namespace std ;

int gcd (int x, int y){
    int z ;
    while(y != 0){
        z = x % y ;
        x = y ;
        y = z ;

    }
    return x ;

}

void reduce(int &x, int &y){
    int c = gcd(x, y) ;
    x /= c ;
    y /= c ;
}
int main(){
    cout << gcd(16, 8) << endl ;
    int a = 45,  b= 15 ;
    reduce(a, b) ;
    cout << a <<  " " << b << endl ;
    return 0 ;
}