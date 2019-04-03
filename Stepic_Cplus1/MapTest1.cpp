#include <iostream>
#include <map>
#include <string>

using  namespace std ;

int main(){
    map<int, string> s ;
    s[112] = "sos" ;

    if (s.find(112) != s.end())
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;

    return 0 ;
}