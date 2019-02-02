#include <iostream>
#include <iomanip>
using namespace std ;
int main() {
  
    int a[100][100] ;
    int n, m ;
    cin >> n >> m ;
    int counter = 0 ;
    int i = 0, j = -1 ;
    while (counter < n*m){
        
        cout << endl << "first While : " << endl ;
        while(j < m-1 && !a[i][j+1]){
            a[i][++j] = ++counter ;
            cout << "["<< i << ","<< j << "]" ;
        }
        cout << endl << "second While : " << endl ;
        while(i < n-1 && !a[i+1][j]){
            a[++i][j] = ++counter ;
            cout << "["<< i << ","<< j << "]" ;
        }
        cout << endl << "third While : " << endl ;
        while(j > 0 && !a[i][j-1]){
            a[i][--j] = ++counter ;
            cout << "["<< i << ","<< j << "]" ;
        }
        cout << endl << "fourth While : " << endl ;
        while (i > 1 && !a[i-1][j]){
            a[--i][j] = ++counter ;
            cout << "["<< i << ","<< j << "]" ;
        }
        
    }

    
    
    // output
    for(int i = 0; i < n; i++){
         for(int j = 0; j < m ; j++)
             cout << setw(4) << a[i][j] ;
        cout << endl ;
    }
  return 0;
}