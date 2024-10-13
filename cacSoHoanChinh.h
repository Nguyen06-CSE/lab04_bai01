#include<iostream>
#include<conio.h>
#include<math.h>
#include"soHoanHao.h"

using namespace std;


void cacSoHoanChinh( int n) {
    int dem = 0;
    cout << "cac so hoan chinh trong day tu 1 den " << n << " la ";
    for ( int i = 1; i <= n; i++) {
        soHoanHao(i);
    }
}
