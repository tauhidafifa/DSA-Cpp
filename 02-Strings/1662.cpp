#include <iostream>
#include<vector>
#include <string>
using namespace std;
bool check(vector<string>s1,vector<string>s2){
    string str1,str2;
    for(int i=0;i<s1.size();i++){
        str1=str1+s1[i];
    }
    for(int i=0;i<s2.size();i++){
        str2+=s2[i];
    }
    return str1==str2;
}

int main(){
    vector<string>s1={"ab","c"};
    vector<string>s2={"a","bcd"};
    cout<<check(s1,s2);
    
}
