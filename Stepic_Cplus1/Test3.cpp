#include <iostream>
using namespace std ;

bool IsPointInArea(double x, double y){
        return ( (y+x) >= 0 && (2*x-y+2) <= 0 && (x+1)*(x+1) + (y-1)*(y-1) <= 4 )
            || ( (y+x) <= 0 && (2*x-y+2) >= 0 && (x+1)*(x+1) + (y-1)*(y-1) >= 4 ) ;
}

int main(){
    double x, y ;
    cin >> x >> y ;

    if (IsPointInArea(x, y))
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;

    return 0; 
}