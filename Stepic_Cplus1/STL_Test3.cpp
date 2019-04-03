#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std ;

struct man{
    int height ;
    string name ;
} ;

bool cmp(man a, man b){
    return a.height < b.height ;
}

int main(){
    int n ;
    cin >> n ;
    vector <man> a(n) ;

    for(int i = 0; i < n; i++){
        int temp ;
        string s_temp ;
        cin >> temp >> s_temp ;
        man temp_man ;
        temp_man.height = temp ;
        temp_man.name = s_temp ;
        a[i] = temp_man ;
    }

    sort(a.begin(), a.end(), cmp) ;

    for(auto now : a){
        cout << now.name << " " ;
    }

    cout << endl ;

    return 0 ;
}