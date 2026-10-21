#include <iostream>
#include <string>
using namespace std;
int freq(string str,char key){
    int count=0;
    for(int ch=0;ch<str.length();ch++){
        if(str[ch]==key){
            count++;
        }
    }
    return count;
}

int main(){
    string str="afifaatiya";
    cout<<freq(str,'a');
}