#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int,string> mp;
    mp.insert({1,"Apple"});
    mp.emplace(2,"Banana");
    mp[4]="Mango";
    for(auto x: mp){
        cout<<x.first<<":"<<x.second<<endl;
    }

}
