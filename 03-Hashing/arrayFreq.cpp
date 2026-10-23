#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void freq(vector <int> &v,int key){
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    for(auto p:m){
        cout<<p.first<<":"<<p.second<<endl;
    }
    for(auto p: m){
        if(p.first==key){
            cout<<p.second;
        }
    }
}
int main(){
    vector <int> v={1,2,3,2,3,1,1,1,2,3};
    freq(v,1);
}
