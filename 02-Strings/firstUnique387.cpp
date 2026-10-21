#include <iostream>
#include <string>
using namespace std;
int unique(string str){
    for(int i=0;i<str.length()-1;i++){
        for(int j=i+1;j<str.length();j++){
            if(str[i]!=str[j]){
                return j;
            }
        } 
    }
    return -1;
}
int main(){
    string str="afifa";
    cout<<unique(str);
}