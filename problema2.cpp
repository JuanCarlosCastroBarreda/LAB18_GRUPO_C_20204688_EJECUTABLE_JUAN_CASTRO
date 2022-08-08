#include <iostream>

using namespace std;

template <int n>
struct fibo
{
    enum{value=fibo<n-1>::value + fibo<n-2>::value};
};

template<>
struct fibo<1>
{
    enum{value=1};
};
template<>
struct fibo<0>
{
    enum{value=0};
};

int main()
{
    int x=fibo<21>::value;
    cout<<x<<endl;
    return 0;
}