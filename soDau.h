#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
int SoDau( int n) {
    while (n > 9) {
        n /= 10;
    }
    return n;
}
