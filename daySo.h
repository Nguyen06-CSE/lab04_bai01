#define TAB '\t'
#include<iostream>


using namespace std;

void inDaySo( int n) {
    int dem = 1;
    int hang = 1;
    for ( int i = 1; i <= n; i++) {
        cout << i << TAB;
        ++dem;
        if (dem == hang * 10 + 1) {
            cout << endl;
            ++hang;
        }
    }
    cout << endl;
}