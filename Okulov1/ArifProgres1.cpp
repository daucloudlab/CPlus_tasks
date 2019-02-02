#include<iostream>
using namespace std ;
int main(){
    int a1, d, an, n ;
    cout << "Арифметикалық қатардың бірінші мәні қандай?" << endl ;
    cin >> a1 ;

    cout << "Арифметикалық қатардың бірінші мәні мен екінші мәнінің айырмашылығы қандай?"
        << endl ;
    cin >> d ;

    cout << "Қатардың қай мәнің табу қажет?" << endl ;
    cin >> n ;
    an = a1 + (n-1)*d ;

    cout << n << " қатардағы мәні тең болады " << an << " ға" << endl ;
    cout << "Суммасы тең болады -> " << (a1+an)*n/2 << endl ;
    
    return 0 ;
}