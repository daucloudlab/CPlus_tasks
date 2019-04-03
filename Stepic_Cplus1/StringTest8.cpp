#include <iostream>
#include <string>

using namespace std ;

int main(){
    string s1 ;
    getline(cin, s1) ;
    
    string max_str = "" ;
    int length = 0 ;
    int max = 0 ;
    string s2 = "" ;
    int i = 0 ;
    char c ;
    while (i < s1.size()){
        c = s1[i] ;
        i++ ;
        if (c != ' ' && i != s1.size()){
            s2 += c ;
        }else if (c == ' ' || i == s1.size()){
            length = s2.size() ;
            if (max < length){
                max = length ;
                max_str = s2 ;
            }
            s2 = "" ;
        }
        
    }
    cout << max_str << endl ;

    return 0 ;
}