#include <iostream>
#include <string>

using namespace std ;

int main(){
    string s ;

    getline(cin, s) ;
    int count = 0 ;
    int shift = s.find(" ") ;
    while ( shift != -1){
        count++ ;
        shift = s.find(" ", shift+1) ;
    }

    cout << count+1 << endl ;

    return 0 ;
}