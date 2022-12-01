#include"qwe.h"
#define _USE_MATH_DEFINES

int main() {
    int a=5;
    int b=10;
    Fractional temp(a,b);
    Fractional temp2(2,3);
    Fractional t2;
    t2=(temp2-temp);
    t2++;
    t2.print();
    cout<<t2;
    return 0;
}//++,