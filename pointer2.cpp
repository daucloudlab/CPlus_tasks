#include<iostream>
using namespace std ;

int main(){
    const int SIZE = 5 ;
    // int arr[SIZE] = {2,3,4,2,4} ;
    int  arr[] = {2,3,4} ;
    for (int i = 0;  i < sizeof(arr)/sizeof(int); i++){
        cout << *arr + i << endl ;
    }

    return 0 ;
}