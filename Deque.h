
#ifndef UNTITLED10_DEQUE_H
#define UNTITLED10_DEQUE_H
#include "Fractional.h"

class Deque: public Fractional{
friend class Fractional;
private:
    struct element{
        Fractional data;
        element *next;
    };
    element *head;
public:
        Deque();
        ~Deque();
        void addBegin(Fractional);
        void addEnd(Fractional);
        bool dellBegin(Fractional *value);
        void printList();
        void printSomething();
};


#endif //UNTITLED10_DEQUE_H
