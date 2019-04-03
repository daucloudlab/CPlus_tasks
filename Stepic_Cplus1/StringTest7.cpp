#include <iostream>
#include <string>

using namespace std ;

int main(){
    string s1 ;
    getline(cin, s1) ;

    int n = s1.size() ;
    string s2 = "";
    for(int i = n-1; i >= 0; i--){
        s2 += s1[i] ;
    }

    if (s1 == s2)
        cout << "yes" << endl ;
    else
        cout << "no" << endl ;
        
    return 0 ;
}