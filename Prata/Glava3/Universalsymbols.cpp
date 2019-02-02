#include<iostream>
using namespace std ;

int main(){
    int k\u00F6rper ;

    k\u00F6rper = 7 ;

    cout << k\u00F6rper << endl ;
    cout << "Let them eat g\u00E2teau.\n" ;
    cout << "\u222B" << endl;
    cout << "D\u00E1\u00FDlet" << endl;
    cout << "Дәулет" << endl ;

    cout << "sizeof wchar_t" << sizeof (wchar_t) << endl ;
    wchar_t t = L'p' ;
    wcout << t << endl ;
    wcin >> t ;
    wcout << t << endl ;

    char16_t a = u'Ұ' ;
    char32_t b = U'Ә' ;

    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    // cin >> a ;
    // cin >> b ;
    // cout << "a = " << a << endl ;
    // cout << "b = " << b << endl ;
    cout.put(a) ;
    return 0; 
}