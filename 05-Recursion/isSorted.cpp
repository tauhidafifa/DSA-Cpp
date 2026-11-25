#include <iostream>
using namespace std;
bool isSorted(int arr[],int i,int n){
    if(i==n) return true;
    if(arr[i]>arr[i+1]) return false;
    return isSorted(arr,i+1,n);
}
int main(){
    int arr[]={2,4,6,8,0};
    cout<<isSorted(arr,0,5);
}