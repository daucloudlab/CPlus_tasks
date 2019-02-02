#include<iostream>
#include<ctime>
using std::cout ;
using std::endl ;

int main(){
    int size = 5 ;
    int *arr = new int[size] ;
    
    srand(time(0)) ;
    for (int i = 0; i < size; i++){
        arr[i] = rand() % 10 ;
        cout << arr[i] << "\t" << (arr + i) << endl ;
        
    }
    
    delete [] arr ;
    arr = nullptr ;
    

    return 0 ;
}