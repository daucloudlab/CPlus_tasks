#include <iostream>
using namespace std ;
const int SIZE = 10 ;
int col[SIZE] ;
int diag1[2*SIZE-1] ;
int diag2[2*SIZE-1] ;
int count = 0 ;

void solve(int i, int n ){
    if (i == n){
        count++ ;
        return ;
    }
    else{
        for(int j = 0; j < n; j++){
            if (col[j] || diag1[i+j] || diag2[i-j+n-1])
                continue ;
            col[j] = diag1[i+j] = diag2[i-j+n-1] = 1 ;
            solve(i+1, n) ;
            col[j] = diag1[i+j] = diag2[i-j+n-1] = 0 ;
        }
    }
}

int main(){
    int n ;
    cin >> n ;
    solve(0, n) ;
    cout << count << endl ;
    
    return 0 ;
}