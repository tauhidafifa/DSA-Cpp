#include <iostream>
#include <map>
using namespace std;
int main(){
    int arr[]={4,8,2,9,1,1,2,4,7};
    map<int,int>m; 
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        m[arr[i]]++;
    }
   for(int x :arr){
    if(m[x]==1){
        cout<<x;
        break;  
    }
   }
}