#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;
//wrong approach 
bool anagramMine(string a,string b){
    map<char,int>m1;
    map<char,int>m2;
    for(char x:a){
        m1[x]++;
    }
    for(int i=0;i<b.size();i++){
        m2[b[i]]++;
    }
    for(auto p:m2){
        for(auto q:m1){
            if(p.first==q.first){
                if(p.second>q.second){
                    return false;
                }
            } else{
                return false;
            }
        }
    }
    return true;
}
//wrong
bool anagram(string a,string b){
    unordered_map<char,int>m;
    for(char ch:a){
        m[ch]++;
    }
    vector<char>v;
    for(char ch:b){
        if(m.count(ch)){
            v.push_back(ch);
            m.erase(ch);
        }
        else{
            return false;
        }
    }
    if(v.size()<m.size()){
        return true;
    }
}
bool  correctAna(string a,string b){
    if(a.size()!=b.size()) return false;
    unordered_map<char,int> m;
    for(char ch:a){
        m[ch]++;
    }
    for(int i=0;i<b.size();i++){
        if(m.count(b[i])==0) {
            return false;
        } else{
            m[b[i]]--;
        }
    }
    return true;
}
bool optimal(string a,string b){
    if(a.size()!=b.size()) return false;
    unordered_map<char,int>m;
    for(char ch:a) m[ch]++;
    for(char ch :b) m[ch]--;
    for(auto p: m){
        if(p.second!=0) return false;
    }
    return true;
}
int main(){
    string a="anagra m";
    string b="anagram";
   // cout<<correctAna(a,b);
   cout<<optimal(a,b);
}