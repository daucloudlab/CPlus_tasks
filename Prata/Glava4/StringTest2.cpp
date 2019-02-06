#include <iostream>
#include <cstring>

using namespace std ;

int main(){
    char bird[11] = "Mr. Cheeps" ;
    char fish[] = "Bubbles" ;

    cout << bird << endl ;
    cout << fish << endl ;

    char boss[8] = "Bozo" ;
    cout << boss << endl ;
    for(int i =0; i < strlen(boss); i++)
        cout << int(boss[i]) << endl ;

    return 0 ;
}