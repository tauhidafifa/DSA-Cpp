#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
   unordered_map<int,int> mp;
   int arr[]={10,20,30,40};
   int x;
   cout<<"enter x:";
   cin>>x;
   for(int i=0;i<sizeof(arr);i++){
    mp[arr[i]]++;
   }
   if(mp.find(x)!=mp.end()){
    cout<<"found";
   } else{
    cout<<"not found";
   }
   
}