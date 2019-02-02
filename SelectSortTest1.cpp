#include <iostream>
#include <vector>
using namespace std ;

int main(){
    int n, value ;
    cin >> n ;
    vector<int> a ;
    
    for(int i = 0; i < n; i++){
        cin >> value ;
        a.push_back(value) ;
    }

    for(auto i : a)
        cout << i << " " ;
    
    cout << endl ;
    int min_index ;
    for(int i = 0; i < a.size(); i++){
        min_index = i ;
        for(int j = i; j < a.size(); j++){
            if (a[min_index] > a[j])
                min_index = j ;
        }
        int temp ;
        temp = a[i] ;
        a[i] = a[min_index] ;
        a[min_index] = temp ;

    }

    for(auto i : a)
        cout << i << " " ;
    cout << endl ;
    return 0 ;
}