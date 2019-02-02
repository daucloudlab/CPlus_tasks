#include<iostream>
using namespace std ;
void createArray(int ** const arr, int size){
    for (int i = 0; i < size; i++)
        arr[i] = new int[size] ;
}
void fillArray(int** const arr, int size){
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr[i][j] = rand() % 10 ;
        }
    }
}
void showArray( int ** const arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            cout << arr[i][j] << " " ;
        cout << endl ;
    }
    
}

void deleteArray(int ** const arr, int size){
    for(int i = 0; i < size; i++){
            delete [] arr[i] ;
    }
    delete [] arr ;
}
int main(){
    int size = 5 ;
    int ** a = new int*[size];
    createArray(a, size) ;
    fillArray(a, size) ;
    showArray(a, size) ;
    deleteArray(a, size) ;

    return 0 ;
}