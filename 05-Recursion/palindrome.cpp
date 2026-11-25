#include <iostream>
using namespace std;
int pal(int n,int rev){
    if(n==0) return rev;
    return pal(n/10,rev*10+n%10);
}
bool isPal(int n){
    int result=pal(n,0);
    return result==n;
}
int main(){
    int n=12221;
    cout<<isPal(n)<<endl;
    cout<<boolalpha<<isPal(n);
}