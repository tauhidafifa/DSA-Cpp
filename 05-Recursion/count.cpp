#include <iostream>
using namespace std;
int countDigits(int n,int count){
    if(n==0) return count;
    return countDigits(n/10,count+1);
}
int main(){
    int n=15;
    cout<<countDigits(n,0);
}