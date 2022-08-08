#include <iostream>

using namespace std;

template<int d>
class hexa{
    public:
        enum{digito = 48+d};
};

template<>
class hexa<10>{
    public:
        enum{digito = 'A'};
};

template<>
class hexa<11>{
    public:
        enum{digito = 'B'};
};

template<>
class hexa<12>{
    public:
        enum{digito = 'C'};
};

template<>
class hexa<13>{
    public:
        enum{digito = 'D'};
};

template<>
class hexa<14>{
    public:
        enum{digito = 'E'};
};

template<>
class hexa<15>{
    public:
        enum{digito = 'F'};
};

template<int n>
struct Hexadecimal{
    enum{digito = hexa<n%16>::digito};
    int inicio(){
        Hexadecimal<n/16> nuevo;
        nuevo.inicio();
        cout<<char(this->digito);
    }
};

template<>
struct Hexadecimal<0>{
    enum{digito = hexa<0>::digito};
    int inicio(){
        cout<<"\n";
        return 0;
    }
};

int main(){
    Hexadecimal<10> a;
    a.inicio();
    Hexadecimal<1000> b;
    b.inicio();

    return 0;
}