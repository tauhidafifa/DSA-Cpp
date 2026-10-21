#include <iostream>
#include <string>
using namespace std;
void lower(string str){
    for(int i=0;i<str.size();i++){
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<str.size();i++){
        cout<<str[i];
    }
}
int main(){
    string str="ABCDE";
    lower(str);
}