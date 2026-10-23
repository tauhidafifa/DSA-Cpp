#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
void common(vector<int> v1,vector<int> v2){
    unordered_set<int>s1;
   // unordered_set<int>s2;
    for(int i=0;i<v1.size();i++){
        s1.insert(v1[i]);
    }
    
    for(auto p:v2){
        if(s1.count(p)){
            cout<<p<<" ";

        }
    }
}
int main(){
    vector<int> v1={1,2,3,2,4};
    vector<int> v2={1,2,5,3,2,8,0};
    common(v1,v2);

}