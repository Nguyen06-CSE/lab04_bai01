

#define TAB '\t'
#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;

 int chia( int n) {
    int chia = 0;
    for ( int j = 0; j < n; j++) {  
        if (j % 3 == 0 && j % 4 != 0) {
            ++chia;
        }
    }
    return chia;
}