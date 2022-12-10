//
// Created by иван on 07.12.2022.
//

#ifndef UNTITLED10_DEQUE_H
#define UNTITLED10_DEQUE_H
#include "qwe.h"

class deque {
friend class Fractional;
private:
    struct element{
        Fractional data;
        element *next;
    };
    element *head;
public:
        deque();
        ~deque();
        void AddBegin(Fractional);
        void AddEnd(Fractional);
        bool DellBegin(Fractional *value);
        void printdeq();

};


#endif //UNTITLED10_DEQUE_H
