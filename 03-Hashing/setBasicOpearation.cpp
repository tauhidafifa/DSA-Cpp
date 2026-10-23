#include <iostream>
#include <Set>
using namespace std;
bool find(set<int> &s,int key){
   if(s.find(key)!=s.end()){
    return true;
   }
   return false;
}
int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(4);
    s.insert(1);
    s.emplace(10);
    for(auto p: s){
        cout<<p<<" ";
    }
    cout<<endl;
   cout<<find(s,5);
}