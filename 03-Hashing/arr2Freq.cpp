#include <iostream>
#include <map>
using namespace std;
bool check(int arr1[],int arr2[],int n1,int n2){
    map<int,int> m1;
    map<int,int> m2;
    if(n1!=n2){
        return false;
    }
    for(int i=0;i<n1;i++){
        m1[arr1[i]]++;
    }
    for(int i=0;i<n2;i++){
        m2[arr2[i]]++;
    }
    if(m1.size()!=m2.size()){
        return false;
    }
    return true;
}
int main(){
    int arr1[]={1,1,2,3,4,4,4,5};
    int arr2[]={1,1,2,3,4,4,4,5};
    int n1=8;
    int n2=8;
    cout<<check(arr1,arr2,n1,n2);
}