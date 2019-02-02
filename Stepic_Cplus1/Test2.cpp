#include <iostream>
#include <cmath>
using namespace std ;
/*
bool IsPointInSquare(double x, double y){
    if (x >= 0 && y >= 0)
        return x + y <= 1 ;
    else if (x < 0 && y > 0)
        return -x + y <= 1 ;
    else if (x < 0 && y < 0)
        return -x - y <= 1 ;
    else if (x > 0 && y < 0)
        return  x - y <= 1 ;
}
*/
bool IsPointInSquare(double x, double y) { 
  return ((fabs(x) + fabs(y)) <= 1); 
}

int main(){
    double x, y ;
    cin >> x >> y ;

    if (IsPointInSquare(x, y))
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;
    

    return 0 ;
}