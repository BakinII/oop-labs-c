
#include "Deque.h"


int main() {
    int a=350;
    int b=10;
    Fractional temp(a,b);
    Fractional t1(5,6);
    Fractional temp2(2,3);
    Fractional t2;
    t2=(temp2+temp);
    t2++;
    t2.print();
    Deque deq;
    deq.addBegin(temp);
    deq.addBegin(t1);
    deq.printList();
    cout<<temp;
    printTextFile(temp);
    printBinaryFile(temp);

    temp.printSomething();
    deq.printSomething();
    //cout<<scanBinaryFile(temp);
    return 0;

}