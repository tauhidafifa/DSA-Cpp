#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void check(string str){
    unordered_map<char,int> mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    for(auto p:mp){
        cout<<p.first<<":"<<p.second<<endl;
    }
    
}
int main(){
    string str="ppaaandddkl";
    check(str);
}