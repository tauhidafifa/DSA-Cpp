#include <iostream>
using namespace std;
int firstOccur(int arr[],int n,int i,int key){
    if(i>=n) return -1;
    if(arr[i]==key){
        return i;
    }
    return firstOccur(arr,n,i+1,key);
}
int main(){
    int arr[]={0,2,1,3,4,5,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<firstOccur(arr,n,0,9);

}
