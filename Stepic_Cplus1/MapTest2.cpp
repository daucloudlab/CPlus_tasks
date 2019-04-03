#include <iostream>
#include <map>
#include <string>

using namespace std ;

int main(){
    map<int, string> s ;
    s[112] = "sos" ;
    s[102] = "emergency" ;

    for(auto now : s)
        cout << now.first << " " << now.second << endl ;

    return 0 ;
}