#include <iostream>
#include <cmath>

using namespace std ;

int main(){
    
    // sqrt(48 + sqrt(49 + sqrt(50)))
    int i = 50 ;
    double s = sqrt(50) ;
    while (i > 1){
        i-- ;
        s = sqrt(i + s) ;
    }

    return 0; 
}
