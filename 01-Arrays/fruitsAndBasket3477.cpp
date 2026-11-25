#include<iostream>
#include<vector>
using namespace std;
int unplacedFruits(vector<int> &fruits,vector<int> &basket){
    vector<int>used(basket.size(),0);
    int placed=0;
    for(int i=0;i<fruits.size();i++){
        for(int j=0;j<basket.size();j++){
            if(fruits[i]<=basket[j] and used[j]==0){
                used[j]=1;
                placed++;
                break;
            }
        }
    }
    return fruits.size()-placed;
}
int main(){
    vector<int>fruits={4,2,3,5};
    vector<int>basket={3,5,2,1};
    cout<<unplacedFruits(fruits,basket);
}
