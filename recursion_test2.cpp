#include <iostream>
using namespace std ;
int summa(){
    int n ;
    cin >> n ;
    
    if (n == 0){
        return 0 ;
    }else{
         return n + summa() ;   
    }
}

int main() {
  // put your code here
    cout << summa() << endl ;
    
  return 0;
}