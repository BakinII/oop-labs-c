
#include "Deque.h"

Deque::Deque(){
    head= nullptr;
}
Deque::~Deque(){
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

void Deque::addBegin(Fractional value) {
    element* tmp = new element;
    tmp->data = value;
    tmp->next = head;
    (head) = tmp;
}
void Deque::addEnd(Fractional value) {
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
bool Deque::dellBegin(Fractional *value) {
    if (head == NULL)
        return 0;
    *value = (head)->data;
    element* head1 = (head)->next;
    delete head;
    head = head1;
    return 1;
}
void Deque::printList() {
    element* tmp=head;
    while (tmp!=NULL){
        std::cout<<(tmp->data)<<std::endl;
        tmp = tmp->next;
    }
}
void Deque::printSomething(){
    cout<<"deq func"<<endl;
}