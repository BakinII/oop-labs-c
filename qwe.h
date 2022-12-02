
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

    friend int getnum(Fractional);
    friend int getden(Fractional);

    Fractional operator+(Fractional &t2);
    const Fractional& operator=(const Fractional &t1);
    operator float();

    Fractional operator ++(int);
    Fractional operator ++();

    friend Fractional operator -(Fractional &M1,Fractional &m2);

    friend ostream& operator<<(ostream& out ,Fractional& C);
    friend istream& operator>>(istream& in ,Fractional& C);
    friend void printfile(Fractional);
};