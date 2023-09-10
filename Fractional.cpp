#include "Fractional.h"

int Fractional::gcd(int a,int b){
    if (a%b==0) return b;
    if (b%a==0) return a;
    if (a>b) return gcd(a%b,b);
    return gcd(a,b%a);
}
Fractional::Fractional(int a,int b){
    numerator=a;
    denominator=b;
    name=new char[4]{(char(numerator + '0')), '/' , char(denominator + '0') , '\0' };
}
Fractional::Fractional(){
    numerator=0;
    denominator=0;
    name=new char [1];
    name[0]='\0';
}
Fractional::Fractional(int a){
    numerator=a;
    denominator=1;
    name=new char[numerator,'/',denominator,'\0'];
}
Fractional::Fractional(Fractional &a){
    numerator=a.numerator;
    denominator=a.denominator;
    int size=0;
    while(a.name[size] != '\0') {
        ++size;
    }
    name=new char[size+1];
    for(int i=0;i<=size;i++){
        name[i]=a.name[i];
    }

}
Fractional::~Fractional(){
    delete []name;
}
void Fractional::reduction(){
    int t=gcd(numerator, denominator);
    numerator/=t;
    denominator/=t;
}
void Fractional::print(){
    cout << numerator << "/" << denominator << " or ";
    if(name!=0){
        cout<<name;
    }
    cout<<endl;
}
void Fractional::sum(Fractional a){
    numerator+=a.numerator;
    denominator+=a.denominator;
}
Fractional Fractional::operator + (Fractional& t2){
    Fractional temp(this->numerator * t2.denominator + t2.numerator * this->denominator, this->denominator * t2.denominator);
    temp.reduction();
    return temp;
}

Fractional operator - (Fractional& t1,Fractional& t2){
    Fractional temp(t1.numerator * t2.denominator - t2.numerator * t1.denominator, t1.denominator * t2.denominator);
    temp.reduction();
    return temp;
};
Fractional:: operator float(){
    return(float(numerator) / denominator);
}
Fractional Fractional::operator ++(int n){
    Fractional t(*this);
    ++(*this);
    return t;
}
Fractional Fractional::operator ++(){
    this->numerator+=this->numerator;
    this->denominator+=this->denominator;
    this->reduction();
    return *this;
}
const Fractional& Fractional:: operator=(const Fractional &a){
    if(&a==this) return *this;
    if(name) delete[] name;
    name=NULL;
    this->numerator=a.numerator;
    this->denominator=a.denominator;
    if (a.name!=0) {
        int size = 0;
        while (a.name[size] != '\0') {
            ++size;
        }
        name = new char[size + 1];
        for (int i = 0; i <= size; i++) {
            name[i] = a.name[i];
        }
    }
    return *this;
}
int getNumerator(Fractional a){
    return a.numerator;
}
int getDenominator(Fractional a){
    return a.denominator;
}

ostream& operator <<(ostream& out ,Fractional& C){
    return out << getNumerator(C) << '/' << getDenominator(C) << endl ;
}/*
istream& operator >>(istream& in ,Fractional& C){
    cout<<"введите числитель";in>>C.numerator;
    cout<<"введите знаменатель";in>>C.denominator;
}*/
void printTextFile(Fractional& c){
    ofstream f("aaa.txt", ios_base::out);
    f << c.numerator;
}
void printBinaryFile(Fractional& c){
    ofstream f("txt.txt", ios_base::binary);
    f << (char)c.numerator;
}
int scanBinaryFile(Fractional& c){
    ifstream f("txt.txt", ios_base::binary);
    unsigned char a;
    f>>a;
    c.numerator=(int)a;
    return (int)a;
}
void Fractional::printSomething() {
    cout<<"Frac func"<<endl;
}