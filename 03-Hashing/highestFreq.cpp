#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void freq(string str){
    unordered_map<char,int> mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    int max=0;
    char al=' ';
    for(auto p:mp){
        if(p.second>max){
            max=p.second;
           al=p.first;
        }
    }
    cout<<al;
}
int main(){
    string str="aabjbsdaaaaa";
    freq(str);
}
