#include <iostream> 
#include <string>
using namespace std;
void removeSpace(string str){
    string s="";
   // int sSize=str.size();
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            s=s+str[i];

        }
    }
    cout<<s;
}
int main(){
    string str="A fi f  a";
    removeSpace(str);
}
