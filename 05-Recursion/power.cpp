#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(b%2==0){
        return pow(a,b/2)*pow(a,b/2);
    } else{
        return pow(a,b/2)*pow(a,(b/2)+1);
    }
}
int main(){
    int a=2;
    int b=10;
    cout<<pow(a,b);
}