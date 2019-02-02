#include <iostream>
using namespace std ;

int main(){
    int a1[] {3,4,5,6} ;

    cout << a1 << endl ;

    for(int i = 0 ;i < sizeof a1 / sizeof(int); i++)
        cout << a1[i] << " "  ;
    
    return 0 ;
}