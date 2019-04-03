#include <iostream>
#include <cstring>

using namespace std ;
int main(){
    string s ;
    char a[20] ;
    getline(cin, s) ;

    cin.getline(a, 20) ;

    cout << "s = " << s << endl ;
    cout << "a = " << a << endl ;

     return 0 ;
 }