#include <iostream>
#include <set>
#include <vector>
using namespace std;
int uniqueSet(vector<int> v){
    set<int> s;
    int count=0;
    for(int x :v){
        s.insert(x);
    }
    for(int x:s){
        count++;
    }
    return count;
}
int main(){
    vector <int>v={1,2,1,2,3,4};
    cout<<uniqueSet(v);
}