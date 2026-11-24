#include<iostream>
#include <vector>
using namespace std;
double medianOfTwoSortedArrays(vector<int>a1,vector<int>a2){
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<a1.size() and j<a2.size()){
        if(a1[i]<a2[j]){
            ans.push_back(a1[i]);
            i++;
        } else{
            ans.push_back(a2[j]);
            j++;
        }
    }
    while(i<a1.size()){
        ans.push_back(a1[i]);
        i++;
    }
    while(j<a2.size()){
        ans.push_back(a2[j]);
        j++;
    }
    int n=ans.size();
    double median=0;
    if(n%2==0){
        median=(ans[n/2]+ans[n/2-1])/2.0;
    } else{
        median=ans[n/2];
    }
    return median;
}
int main(){
    vector<int>a1={2,5,6};
    vector<int>a2={1,3,4};
    cout<<medianOfTwoSortedArrays(a1,a2)<<endl;
}


