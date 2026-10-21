#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void reverse(string str){
    int st=0, end=str.length()-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    str[0]=toupper(str[0]);
    str[str.length()-1]=tolower(str[str.length()-1]);
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
}
int main(){
    string str="abcd";
    reverse(str);
}
