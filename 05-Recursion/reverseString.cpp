#include <iostream>
#include <string>
using namespace std;
string reverse(string s,int st,int end){
    if(st>=end){
        return s;
    }
    swap(s[st],s[end]);
    return reverse(s,st+1,end-1);
}
int main(){
    string s="atiya";
    cout<<reverse(s,0,s.length()-1);
    
}