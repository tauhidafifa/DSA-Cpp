#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector <int> twoSum(int arr[],int n,int target){
    unordered_map<int,int>m;
   // vector<int>ans;
    //int arr[2];
    for(int i=0;i<n;i++){
        int secondElement=target-arr[i];
        if(m.count(secondElement)){
            return {m[secondElement],i};
        }

        else{
            m[arr[i]]=i;
        }
    }
    return {-1,-1};
    
}
int main(){
    int arr[]={2,7,11,13};
    int n=4;
    int target=13;
    vector<int> result=twoSum(arr,n,target);
    cout<<result[0]<<", "<<result[1];

}