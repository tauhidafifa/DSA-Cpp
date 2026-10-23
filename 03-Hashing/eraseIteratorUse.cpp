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
    auto it = s.find(4);
    if(it!=s.end()){
        s.erase(it);
    }
    for(auto x: s){
        cout<<x<<endl;
    }

}