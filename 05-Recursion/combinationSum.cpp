#include <iostream>
#include <vector>
using namespace std;

void combSum(vector<int>& arr,vector<int> &ans,int i,int sum,int k){
    if(sum==k){
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    if(i==arr.size() || sum>k){
        return;
    }
    ans.push_back(arr[i]);
    combSum(arr,ans,i,sum+arr[i],k);
    ans.pop_back();
    combSum(arr,ans,i+1,sum,k);
}

int main(){
    vector<int>arr={2,3,6,7};
    vector<int>ans;
    cout<<"Started"<<endl; // debug - to confirm exe is running
    combSum(arr,ans,0,0,7);
   // cout<<"Done"<<endl;
    return 0;
}