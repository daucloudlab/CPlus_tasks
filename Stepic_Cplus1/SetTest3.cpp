#include <iostream>
#include <set>

using namespace std ;

int main(){
    int n ;
    multiset<int> s ;

    cin >> n ;
    for(int i = 0; i < n; i++){
        int x ;
        cin >> x ;
        s.insert(x) ;
    }
    int cnt = 0 ;
    for(auto now = s.lower_bound(1); now != s.upper_bound(1); now++){
        cnt++ ;
    }
    cout << "Количество единиц = " << cnt << endl ;
    
    return 0 ;
}