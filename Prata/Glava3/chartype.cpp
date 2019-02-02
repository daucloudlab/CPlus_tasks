#include<iostream>
using namespace std ;

int main(){
    char t ;
    char* pt = &t ;

    cin >> t ;
    cout << "Сіздің енгізген символыныз " << t << endl ;

    cout << "Бірақ t айнымалысының ішінде " << *pt << " мәні бар" << endl ;
    
    return 0 ;

}