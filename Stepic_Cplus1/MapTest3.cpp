#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std ;

int main(){
    map<string, vector<string>> s ;
    s["Vasia"] = { "112133", "12341" } ;
    for (auto now : s["Vasia"])
        cout << now << endl ;
        
    return 0 ;
}