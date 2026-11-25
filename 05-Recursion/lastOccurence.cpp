#include <iostream>
using namespace std;
int lastOccur(int arr[],int n,int i,int key,int last){
    if(i>n) return -1;
    if(i==n) return last;
    if(arr[i]==key){
        last=i;
    }
    return lastOccur(arr,n,i+1,key,last);
}
int main(){
    int arr[]={3,2,4,2,3,4,2,3};
    cout<<lastOccur(arr,sizeof(arr)/sizeof(arr[0]),0,3,0);
}