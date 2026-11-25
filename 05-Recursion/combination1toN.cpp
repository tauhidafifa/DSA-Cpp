#include<iostream>
#include <vector>
using namespace std;
void comb(vector<int> &arr,vector<vector<int>> &result,vector<int> &path,int n,int i,int k){
    if(path.size()==k){
        result.push_back(path);
        return;
    }
    if(i>=n){
        return;
    }
    path.push_back(arr[i]);
    comb(arr,result,path,n,i+1,k);
    path.pop_back();
    comb(arr,result,path,n,i+1,k);

}
vector<vector<int>> combination(int n,int k){
    vector<int>arr;
    for(int i=1;i<n+1;i++){
        arr.push_back(i);
    }
    vector<vector<int>>result;
    vector<int>path;
    comb(arr,result,path,n,0,k);
    return result;
}
int main(){
    int n=5;
    int k=2;
    vector<vector<int>>ans=combination(n,k);
    for (auto combination : ans) {
        for (int x : combination) {
            cout << x << " ";
        }
        cout << endl;
    }
}