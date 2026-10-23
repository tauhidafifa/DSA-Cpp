#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
   int arr[]={1,2,3,2,2,5};
   int countofNum=3;
   unordered_map<int,int> mp;
   for(int i=0;i<sizeof(arr)/sizeof(arr[0 ]);i++){
    mp[arr[i]]++;
   }
   cout<<mp[countofNum];
}