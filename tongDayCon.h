#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;


int timTongDayCon( int n) {
     int m = 0;
     int sum = 0;
    for ( int i = 1; i <= n; i++) {
        sum += i;
        ++m;
        if (sum >= n) {
            return m;
        }
    }
}

