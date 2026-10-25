#include <iostream>
#include <vector>
using namespace std;
int subarr(vector<int> &arr,int key){
    int count=0,sum=0;
    for(int i=0;i<arr.size();i++){
        sum=arr[i];
        if(sum==key){
            count++;
        }
        for(int j=i+1;j<arr.size();j++){
            sum=sum+arr[j];
            if(sum==key){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    vector<int>arr={2,2,2,3,3,6};
    cout<<subarr(arr,6);
}