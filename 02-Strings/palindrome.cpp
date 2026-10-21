#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool pal(string str){
    for(int i=0;i<str.size();i++){
        str=tolower(i);
    }
    string original=str;
    reverse(str.begin(),str.end());
    return str==original;
}
bool palindrome(string str){
    int i=0, j=str.size()-1;
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    string  original=str;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    } 
    if(str==original){
        return true;
    }
    return false;
}
int main(){
    string str="Afifa";
    cout<<pal(str);
    cout<<endl;
    cout<<palindrome(str);
}