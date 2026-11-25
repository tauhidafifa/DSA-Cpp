#include <iostream>
using namespace std;
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
void print(int n,int i=0){
    if(i==n) return;
    cout<<fib(i)<<" ";
    print(n,i+1);
}
int main(){
    int n=6;
    print(n);
}