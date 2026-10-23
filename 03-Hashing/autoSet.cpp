#include <iostream>
#include <set>
using namespace std;
int main(){
    set<char> s;
    s.insert('a');
    s.insert('b');
    s.insert('c');
    s.insert('g');
    s.insert('d');
    s.insert('n');
    auto it=s.find('n');
    if(it !=s.end()){
        cout<<"found";
    } else{
        cout<<"not found";
    }
    s.erase('d');
    for(auto x :s){
        cout<<x<<" ";
    }
}