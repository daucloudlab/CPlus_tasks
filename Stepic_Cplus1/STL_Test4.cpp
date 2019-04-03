#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

void print(vector <int> a){
    for (auto now : a){
        cout << now << " " ;
    }
    cout << endl ;
}
int main(){
    int n ;
    cin >> n ;
    vector <int> a(n) ;
    for(int i = 1; i <= n; i++)
        a[i-1] = i ;
    
    while(next_permutation(a.begin(), a.end())){
        print(a) ;
    }

    return 0 ;
}