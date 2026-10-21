#include <iostream>
#include <string>
using namespace std;
int lastCount(string str){
    int count=0;
    int st=0, end=str.length()-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    for(int i=0;i<str.length()-1;i++){
        //count++;
        if(str[i]==' '){
            break;
        }
        count ++;
    }
    return count;
}
int optimal(string str){
    int count=0;
    for(int i=str.length()-1;i>0;i--){
        if((str[i]==' ' and count==0) ){
            continue;
        } else if(str[i]==' '){
            break;
        }  else{
             count ++;
        }
    }
    return count;
}
int main(){
    string str="hello world   ";
    cout<<lastCount(str);
    cout<<endl;
    cout<<"optimal solution is:"<<optimal(str);
}