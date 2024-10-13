#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>


using namespace std;

 void daoNguocSo( int n) {
     //vi dung bien phu khong luu duoc cac so chua so 0 nen se dung string
    /*int phanDu = 0;
    int a = 0;
    while (n > 0) {
        phanDu = n % 10;
        a = a * 10 + phanDu;
        n = n / 10;
    }

    return a;*/

     string chuoi = "";
     while (n > 0) {
         chuoi = chuoi + to_string(n % 10);
         n /= 10; 
     }
     cout << "So dao nguoc cua " << n << " la: " << chuoi << endl;
 }



