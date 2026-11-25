#include <iostream>
#include <vector>
using namespace std;
void ps(vector <int> arr,vector <int> &ans,int i){
    if(i==arr.size()){
        cout<<"[";
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<"]"<<endl;
        return;
    }
    ans.push_back(arr[i]);
    ps(arr,ans,i+1);
    ans.pop_back();
    ps(arr,ans,i+1);
    int count =0;
  //////  for(int i=0;i<=ans.size();i++){
        count+=1;
  //  }

   /// cout<<count;

}
int main(){
    vector <int> arr={7,8,9};
    vector <int> ans;
    ps(arr,ans,0);
    return 0;
}