#include <iostream>
using namespace std;
int linear(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return linear(arr,n,i+1,key);
}
int main(){
    int arr[]={3,2,8,4,1};
    cout<<linear(arr,5,0,8);

}