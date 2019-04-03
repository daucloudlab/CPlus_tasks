#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    vector <pair <int, int>> a(n) ;

    for (int i = 0; i < n; i++){
        int temp ;
        cin >> temp ;
        a[i] = {temp, i} ;
    }

    sort(a.begin(), a.end()) ;

    for(auto now : a)
        cout << now.second << " " ;

    cout << endl ;
    
    return 0 ;
}