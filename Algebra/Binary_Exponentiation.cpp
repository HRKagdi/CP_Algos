#include<iostream>
using namespace std;
//https://cp-algorithms.com/algebra/binary-exp.html

long long BE_rec(long long n, long long a){
    if(a==0) return 1;

    long long temp = BE_rec(n, a/2);
    if(a&1) {
        return n * temp * temp;
    }
    else{
        return temp * temp;
    }
}
 

int main(){
    long long n, a;

    // Take input of base and power.
    cin>>n>>a;

    cout<<BE_rec(n, a);

    return 0;
}
