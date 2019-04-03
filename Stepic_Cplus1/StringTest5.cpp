#include <iostream>
#include <string>

using namespace std ;

int main(){
    string s ;
    getline(cin, s) ;
    char c = s[0] ;
    string s2 = "" ;

    if (c >= 'a' && c <= 'z'){
        int al_num = c - 'a' ;
        s2 = 'A' + al_num ; 
    }else if (c >= 'A' && c <= 'Z'){
        int al_num = c - 'A' ;
        s2 = 'a' + al_num ;
    }else{
        s2 = c ;
    }

    cout << s2 << endl ;
    
    return 0 ;  
}