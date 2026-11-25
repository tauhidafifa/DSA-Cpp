#include <iostream>
#include <algorithm>
using namespace std;
int largest(int arr[],int i,int n,int maxE){
    if(i==n) return maxE;
    return largest(arr,i+1,n,max(arr[i],maxE));
}
int main(){
    int arr[]={2,5,1,8,9};
    cout<<largest(arr,0,5,0);
}