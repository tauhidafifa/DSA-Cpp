#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*int duplicate(vector<int> &v){
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    int count=0;
    vector<int> v1;
    for(auto p:m){
        if(p.second>1){
            count++;
        v1.push_back(p.first);
        }
    }
    cout<<"duplicate elements are:";
    for(int p:v1){
        cout<< p<<" ";
    }    
    cout<<endl;
    return count;
}*/
int dup(vector<int>v){
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    int count=0;
    cout<<"Duplicate elements are: ";
    for(auto p:m){
        if(p.second>1){
            count++;
            cout<< p.first<<" ";
        }
    }
    cout<<endl;
    return count;
}
int main(){
    vector<int>v={1,2,1,2,4,4};
    //cout<<duplicate(v);
    cout<<dup(v);
}