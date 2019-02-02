#include<iostream>
using namespace std ;

void foo(int &a){
    a++ ;
}
int main(){
    int a = 5 ;
    cout << "a = " << a << endl ;
    foo(a) ;
    cout << "a = " << a << endl ;
    
    return 0;

}