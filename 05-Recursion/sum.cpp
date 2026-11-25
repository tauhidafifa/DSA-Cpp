#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    //int s= n+sum(n-1);
    return n+sum(n-1);
}
int main(){
    int n=5;
    cout<<sum(n);
}
