#include<iostream>


using namespace std;

#include"dayso.h"
#include"chia.h"
#include"demChuSo.h"
#include"cacSoHoanChinh.h"
#include"soDau.h"
#include"tongChuSo.h"
#include"tongDayCon.h"
#include"chuyenNhiPhan.h"
#include"daoNguocSo.h"




int main() {
    int n; 
    cout << "nhap so n";
    cin >> n;

    inDaySo(n);

     int CHIA = chia(n);cout << "so chia het cho 3 nhung khong chia het cho 4 la " << CHIA << endl;

     int dem = DemChuSo(n); cout << "n co so chu so la " << dem << endl;

    daoNguocSo(n);


     int tong = tongChuSo(n); cout << "tong cac chu so la " << tong << endl;

    chuyenNhiPhan(n);


     int dau = SoDau(n); 
     cout << "so dau tien cua " << n << " la :" << dau << endl;

    cacSoHoanChinh(n);

     int m = timTongDayCon(n); cout << endl << "so nguyen m lon nhat sao cho tong  1+2+...+m <= n la " << m << endl;

    return 0;
}