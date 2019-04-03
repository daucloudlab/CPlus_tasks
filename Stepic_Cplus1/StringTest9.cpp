#include <iostream>
#include <string>

using namespace std ;

int main(){
    string s1 ;
    getline(cin, s1) ;
    s1 += " " ;
    int length = 0 ;
    int max = 0 ;
    string max_str = "" ;

    string s2 = "";
    for(auto c : s1){
        if (c != ' ' && c != '\0'){
            s2 += c ;
            length = length + 1 ;
        }else {
            if (length > max){
                max = length ;
                max_str = s2 ;
            }
            s2 = "" ;
            length = 0 ;
        }
        
    }

    cout << max_str << endl ;

    return 0 ;
}