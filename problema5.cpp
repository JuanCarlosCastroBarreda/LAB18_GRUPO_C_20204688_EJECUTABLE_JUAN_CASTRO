#include <iostream>

using namespace std;

#include <iostream>

template<int n>
struct binario
{
    enum{value = (binario<n/2>::value)*10+(n%2)};
};

template<>
struct binario<0>
{
    enum{value = 0};
    
};

int main(){
    int a = binario<1>::value;
    int b = binario<2>::value;
    int c = binario<3>::value;
    int d = binario<4>::value;
    int e = binario<5>::value;
    int f = binario<6>::value;
    int g = binario<7>::value;
    int h = binario<8>::value;
    int i = binario<9>::value;
    int j = binario<10>::value;
    int k = binario<11>::value;
    int l = binario<12>::value;
    int m = binario<13>::value;
    int n = binario<14>::value;
    int o = binario<15>::value;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j<<"\n"
    <<k<<"\n"<<l<<"\n"<<m<<"\n"<<n<<"\n"<<o;
    return 0;
}