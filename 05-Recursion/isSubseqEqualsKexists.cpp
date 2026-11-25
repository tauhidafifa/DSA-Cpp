#include <iostream>
#include <vector>
using namespace std;
bool isExist(vector<int>arr,int sum,int i,int k){
    if(i==arr.size()){
        if(sum==k){
            return true;
        }
        return false;
    }
    bool pick=isExist(arr,sum+arr[i],i+1,k);
    bool pop=isExist(arr,sum,i+1,k);
    return pick or pop;
}
int main(){
    vector<int>arr={1,2,3};
    cout<<isExist(arr,0,0,3);
}
