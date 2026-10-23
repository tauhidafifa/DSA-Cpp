#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[]={1,2,3,4,3,2,1,1,3,3};
    unordered_map<int, int> freq;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto x :freq){
        cout<<x.first<<"->"<<x.second<<endl;
    }
}