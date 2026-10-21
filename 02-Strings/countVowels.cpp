#include <iostream>
#include <string>
using namespace std;
int countVowels(string str){
    int count=0;
    for(char ch=0;ch<str.length();ch++){
        if(str[ch]=='a' or str[ch]=='A' or str[ch]=='E' or str[ch]=='I' or str[ch]=='O' or str[ch]=='U' or str[ch]=='e' or str[ch]=='i' or str[ch]=='o' or str[ch]=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    string str="AfifaTauhid";
    cout<<countVowels(str);
}