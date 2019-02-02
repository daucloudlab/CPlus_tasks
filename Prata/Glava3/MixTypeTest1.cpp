#include <iostream>

using namespace std ;

int main(){
    const int code = 66 ;
    int x = 66 ;

    // мүмкіндік бермейді
    //char c1 {31325} ;

    char c2 {66} ;
    char c3 {code} ;

    // мүмкіндік бермейді
    // char c4 {x} ;

    char c5 = x ;
    x = 31325 ;
    char c6 = x ;
    cout << c6 << endl ;
    return 0 ;
}