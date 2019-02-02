#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m, a[100][100];
    cin >> n >> m;
    
    // fill nearby cells
    int i = 0, j = -1, count = 0;
    while (count < n*m) {
        while (j < m - 1 && !a[i][j+1])
            a[i][++j] = ++count;   // right
        while (i < n - 1 && !a[i+1][j])
            a[++i][j] = ++count;   // down
        while (j > 0 && !a[i][j-1])
            a[i][--j] = ++count;   // left
        while (i > 0 && !a[i-1][j])
            a[--i][j] = ++count;   // up
    }
            
    // output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
        
    return 0;
}