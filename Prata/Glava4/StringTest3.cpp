#include <iostream>
#include <string>
#include <cstring>
using namespace std ;
int main(){
    wchar_t charr1[] = L"Hello Дәулет" ;
    char16_t charr2[] = u"Salem Дәулет" ;
    char32_t charr3[] = U"Bona Дәулет" ;
    char charr4[] = "Bonjur Дәулет" ;
    char charr5[] = u8"Guten Дәулет" ;

    string str1 = R"(Salem "Dake" )" ;
    string str2 = R"+(Salem ("Dake"))+" ;

    cout << "charr1 = " << charr1 << endl ;
    cout << "charr2 = " << charr2 << endl ;
    cout << "charr3 = " << charr3 << endl ;
    cout << "charr4 = " << charr4 << endl ;
    cout << "charr5 = " << charr5 << endl ;

    cout << str1 << endl ;
    cout << str2 << endl ;
    return 0 ;
}