#include <iostream>
using namespace std;

template<class T>
     T GetMax(T a,T b ){
        T result;
        result = (a > b)? a : b;
        return (result);
     }

int main(){
    int j = 5;
    int i = 6;
    int k;
    long p = 10;
    long m = 5;
    long n;

    k = GetMax<int>(i,j);
    n = GetMax<long>(p,m);
    cout<<k<<endl;
    cout<<n<<endl;
    return 0;
}