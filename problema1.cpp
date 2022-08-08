#include <iostream>

using namespace std;

template <int n>
struct suma_d
{
    enum{value=(n%10)+suma_d<n/10>::value};
};

template<>
struct suma_d<0>
{
    enum{value=0};
};

int main(){
    int x=suma_d<12345>::value;
    cout<<x<<endl;
    return 0;
}