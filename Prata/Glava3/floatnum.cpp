#include<iostream>
#include<climits>
using namespace std ;

int main(){
    cout.setf(ios_base::fixed, ios_base::floatfield) ;

    float tub = 10.0 / 3.0 ;
    double mint = 10.0 / 3.0 ;
    const float million = 1.0E6 ;

    cout << "tub = " << tub ;
    cout << ", a million tubs = " << million*tub ;
    cout << ",\nand ten million tubs = " << 10*million*tub << endl ;

    cout << endl ;
    
    cout << "mint = " << mint << " and million mints = " ;
    cout << million*mint << endl ;
    cout << "ten million mints = " << 10*million*mint << endl;

    cout << "Минимальное количество значащих цифр: " << endl ;
    cout << "float = " << __FLT_DIG__ << endl ;
    cout << "double = " << __DBL_DIG__ << endl ;
    cout << "long double = " << __LDBL_DIG__ << endl ;

    cout << "Количество битов, используемых для представления мантиссы:" << endl ;
    cout << "float = " << __FLT_MANT_DIG__ << endl ;
    cout << "double = " << __DBL_MANT_DIG__ << endl ;
    cout << "long double = " << __LDBL_MANT_DIG__ << endl ;

    cout << "Максимальное и минимальное значение порядка: " << endl ;
    cout << "float max exp = " << __FLT_MAX_EXP__ << endl ;
    cout << "float min exp = " << __FLT_MIN_EXP__ << endl ;
    cout << "double max exp = " << __DBL_MAX_EXP__ << endl ;
    cout << "double min exp = " << __DBL_MIN_EXP__ << endl ;
    cout << "long double max exp = " << __LDBL_MAX_10_EXP__ << endl ;
    cout << "long double min exp = " << __LDBL_MIN_10_EXP__ << endl ;

    cout << "Размеры типов: " << endl ;
    cout << "sizeof (float) = " << sizeof(float) << endl ;
    cout << "sizeof (double) = " << sizeof(double) << endl ;
    cout << "sizeof(long double) = " << sizeof(long double) << endl ;
    

 
    return 0 ; 
}