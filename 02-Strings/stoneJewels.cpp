#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int stone(string s,string j){
    unordered_set<char> s1;
    for(int i =0;i<j.size();i++){
        s1.insert(j[i]);
    }
    int count1=0;
    for(int i=0;i<s.size();i++){
        if(s1.count(s[i])){
            count1 ++;
        }
    }
    return count1;
}
int main(){
    string s;
    string j;
    cout<<"enter stone:";
    cin>>s;
    cout<<endl;
    cout<<"enter jewels:";
    cin>>j;
    cout<<endl;
    cout<<"total counts are:"<<stone(s,j);
}