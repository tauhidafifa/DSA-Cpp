#include <iostream>
#include <unordered_map>
using namespace std;
void maxFreq(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int maxE=0;
    int maxC=0;
    for(auto p: mp){
        if(maxE<p.second){
            maxE=p.second;
            maxC=p.first;
        }    
    }
    cout<<"Maximum freq of elemenst of arrays is :"<<maxC;
}
int main(){
    int arr[]={1,2,2,2,1,1,1,4,4,4,4,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxFreq(arr,n);
}
 
