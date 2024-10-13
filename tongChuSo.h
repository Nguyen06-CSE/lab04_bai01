#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
unsigned int tongChuSo( int n) {
    int tong = 0;
    do {
        tong += n % 10;
        n /= 10;
    } while (n > 0);
    return tong;
}
