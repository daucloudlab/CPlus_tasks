#include <iostream>

using namespace std ;

int main(){
    int a[100][100] ;
    int n, m ;
    cin >> n >> m ;

    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            if (i == j)
                a[i][j] = 1 ;
            else if (i < j)
                a[i][j] = 0 ;
            else
                a[i][j] = 2 ;
        }
        
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " " ;
        cout << endl ;
    }

    return 0 ;
}