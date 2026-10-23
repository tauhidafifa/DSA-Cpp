#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    for(auto x : s){
        cout<<x<<endl;
    }
  //  cout<<s.count;
   // s.find(5);
    //cout<<r;


}