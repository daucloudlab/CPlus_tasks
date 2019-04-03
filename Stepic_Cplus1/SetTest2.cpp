#include <iostream>
#include <set>

using namespace std ;

int main(){
    int n ;
    set <int> s ;
    cin >> n ;

    for(int i = 0; i  < n; i++){
        int x ;
        cin >> x ;
        s.insert(x) ;
    }

    for(auto now = s.begin(); now != s.end() ; now++){
        cout << *now << endl ;
    }

    for (auto now : s)
        cout << now << " " ;

    return 0 ;
}