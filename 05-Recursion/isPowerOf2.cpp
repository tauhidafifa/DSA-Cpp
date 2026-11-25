#include <iostream>
using namespace std;
bool isPowerOf2(int n,int power){
    if(power==n){
        return true;
    }
    if(power>n){
        return false;
    }
    return isPowerOf2(n,power*2);
}
int main(){
    int n=1024;
    cout<<isPowerOf2(n,1);
}