#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
void chuyenNhiPhan( int n) {
    cout << n << " chuyen sang so nhi phan la ";
    if (n == 0) {
        cout << "0";
        return;
    }
    while (n > 0) {
        int np = n % 2;
        if (np == 0) {
            cout << "0";
        }
        else cout << "1";
        n /= 2;
    }
    cout << endl;
}
