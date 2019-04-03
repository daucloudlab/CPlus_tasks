#include <iostream>
#include <string>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    cin.get() ;

    string s ;
    for(int i = 0; i < n; i++){
        getline(cin, s) ;
        string s2  = "" ;
        for(auto c : s){
            if (c >= 'a' && c <= 'z'){
                int al_num = c - 'a' ;
                s2 += 'A' + al_num ;
            }else
                s2 += c ;
        }
        if (s2.find("RKP") != -1){
            for(auto c : s2){
                if (c >= '0' && c <= '9')
                    cout << c ;
            }
        }
    }
    return 0 ;
}