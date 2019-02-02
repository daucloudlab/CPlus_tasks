#include<iostream>
using namespace std ;

void fillArray(int * const arr, const int size){
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 10 ;
}

void showArray(const int* const arr, const int size){
    for (int i = 0; i < size; i++)
        cout << arr[i] << " " ;
    cout << endl ;
}
int main(){
    int size = 10 ;
    int* a = new int[size] ;
    fillArray(a, size) ;
    showArray(a, size) ;

    return 0 ;
}