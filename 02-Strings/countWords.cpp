#include <iostream>
#include <string>
using namespace std;
int word(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            count++;
        }
    }
    return count;
}
int main(){
    string s="Afifa Tauhid";
    cout<<word(s);
}