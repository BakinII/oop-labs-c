//
// Created by иван on 27.11.2022.
//

//#ifndef UNTITLED10_QWE_H
//#define UNTITLED10_QWE_H

#include <iostream>
using namespace std;

class Fractional{
private:
    int num;
    int den;
    char *name;
    int gcd(int a,int b);
public:
    Fractional(int a,int b);
    Fractional();
    Fractional(int a);
    Fractional(Fractional &a);
    ~Fractional();
    void Reduction();
    void print();
    void Sum(Fractional a);

    Fractional operator+(Fractional &t2);
    const Fractional& operator=(const Fractional &t1);
    operator float();
    friend Fractional operator ++(Fractional &m1,int i1);
    friend Fractional operator ++(Fractional &m1);
    friend Fractional operator -(Fractional &M1,Fractional &m2);
};