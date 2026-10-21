#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
void sum(vector <string> s){
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
}
int counts(vector<string> s){
    int count=0;
    int mcount=0;
    for(int i=0;i<s.size();i++){
        count=0;
        for(int j=0;j<s[i].size();j++){
            if(s[i][j]==' '){
                count++;
            }
        }
        mcount=max(count,mcount);
    }
    return mcount+1;
    
}
int main(){
    vector<string> s={
        "i am student",
        "i love leetcode",
        "i want to be an engineer"
    };
    //sum(s);
    cout<<counts(s);
}