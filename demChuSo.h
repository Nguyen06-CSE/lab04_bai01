#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;

 int DemChuSo( int n) {

    //ham de dem so luong chu so cua n
    int demSoChuSo = 0;
    do {
        n /= 10;
        ++demSoChuSo;
    } while (n > 0);

    return demSoChuSo;
}