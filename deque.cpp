//
// Created by иван on 07.12.2022.
//

#include "deque.h"

deque::deque(){
    head= nullptr;
}
deque::~deque(){
    if(head != NULL) {
        element *curr = head;
        while(curr->next != NULL) {
            head = head->next;
            delete curr;
            curr = head;
        }
        delete head;
        head = NULL;
    }
}

void deque::AddBegin(Fractional value) {
    element* tmp = new element;
    tmp->data = value;
    tmp->next = head;
    (head) = tmp;
}
void deque::AddEnd(Fractional value) {
    element* tmp = new element;
    tmp->data = value;
    tmp->next = NULL;
    if (head == NULL) {
        this->head = tmp;
        return;
    }
    element* first = head;
    while ((head)->next != NULL)
        head = (head)->next;
    head->next = tmp;
    this->head = first;
}
bool deque::DellBegin(Fractional *value) {
    if (head == NULL)
        return 0;
    *value = (head)->data;
    element* head1 = (head)->next;
    delete head;
    head = head1;
    return 1;
}
void deque::printdeq() {
    element* tmp=head;
    while (tmp!=NULL){
        std::cout<<(tmp->data)<<std::endl;
        tmp = tmp->next;
    }
}
void deque::printtsmth(){
    cout<<"deq func"<<endl;
}