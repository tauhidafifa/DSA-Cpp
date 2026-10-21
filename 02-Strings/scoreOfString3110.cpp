#include <iostream>
#include <string>
using namespace std;
int score(string str){
    int sum=0;
    //int val;
    for(int i=0;i<str.length()-1;i++){
        //val=ascii(str[i])-ascii(str[i+1]);
        sum=sum+abs(str[i]-str[i+1]);
    }
    return sum;
}
int main(){
    string str="Afia";
    cout<<score(str);
}