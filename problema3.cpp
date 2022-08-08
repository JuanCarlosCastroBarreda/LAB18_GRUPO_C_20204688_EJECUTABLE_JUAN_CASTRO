#include <iostream>

using namespace std;

template <int n, int m>
struct potencia
{
    enum{value=n*(potencia<n,m-1>::value)};
};

template<int n>
struct potencia<n,0>
{
    enum{value=1};
};

int main()
{
    int x=potencia<2,10>::value;
    cout<<x<<endl;
    return 0;
}