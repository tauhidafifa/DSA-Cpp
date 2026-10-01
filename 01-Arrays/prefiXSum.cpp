#include <iostream>
using namespace std;
int prefix[5];

void calPrefix(int arr[],int n){
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
}
int prefixSum(int left,int right){
    if(left==0){
        return prefix[right];
    } else{
        return prefix[right]-prefix[left-1];
    }
}
int main(){
    int arr[]={2,4,6,8,10};

    calPrefix(arr,5);
    cout<<prefixSum(2,4);

}