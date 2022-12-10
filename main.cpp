//#include"qwe.h"
#include "deque.h"
#define _USE_MATH_DEFINES

int main() {
    int a=350;
    int b=10;
    Fractional temp(a,b);
    Fractional t1(5,6);
    //Fractional temp2(2,3);
    //Fractional t2;
    //t2=(temp2+temp);
    //t2++;
    //t2.print();
    deque deq;
    deq.AddBegin(temp);
    deq.AddBegin(t1);
    deq.printdeq();
    //cout<<temp;
    //printtxtfile(temp);
    //printbinfile(temp);

    temp.printtsmth();
    deq.printtsmth();
    //cout<<scanbinfile(temp);
    return 0;

}