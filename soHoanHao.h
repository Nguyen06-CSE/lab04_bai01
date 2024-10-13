#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;

 int soHoanHao( int n) {
     int cnt = 1;
    for ( int i = 2; i <= n; i++) {
        if (n % i == 0) {
            cnt += i;
            if (cnt / 2 == n) {
                cout << n << " ";
                return n;
            }
        }
    }
    return 0;
}
