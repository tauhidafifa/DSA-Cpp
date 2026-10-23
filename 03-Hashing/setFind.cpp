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
    cout<<s.count(4)<<endl;
    if(s.find(49) != s.end()){
        cout<<"found";
    } else {
        cout<<"not found";
    }
    cout<<endl;
    s.erase(4);
    for(auto x: s){
        cout<<x<<endl;
    }
}