#include <iostream>
#include <set>
using namespace std;
void remDuplicates(int arr[],int n){
    if(n==0){
        cout<<"no elements";
    }
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(auto p:s){
        cout<<p<<" ";
    }
}
int main(){
    int arr[]={1,2,3,2,1,3,4,5,};
    int n=sizeof(arr)/sizeof(arr[0]);
    remDuplicates(arr,n);
}