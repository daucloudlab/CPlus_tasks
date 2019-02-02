#include <iostream>
using namespace std ;
const int SIZE = 10 ;
int col[SIZE] ;
int diag1[2*SIZE-1] ;
int diag2[2*SIZE-1] ;
int count = 0 ;
int n ;

void solve(int i){
    if (i == n){
        count++ ;
        return ;
    }
    else{
        for(int j = 0; j < n; j++){
            if (col[j] || diag1[i+j] || diag2[i-j+n-1])
                continue ;
            col[j] = diag1[i+j] = diag2[i-j+n-1] = 1 ;
            solve(i+1) ;
            col[j] = diag1[i+j] = diag2[i-j+n-1] = 0 ;
        }
    }
}

int main(){
    
    cin >> n ;
    solve(0) ;
    cout << count << endl ;
    
    return 0 ;
}