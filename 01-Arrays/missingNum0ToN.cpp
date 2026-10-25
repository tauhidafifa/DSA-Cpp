#include <iostream>
#include <vector>
using namespace std;
int missingNum(vector<int> &num){
    int originalSum=0;
    for(int i=1;i<=num.size();i++){
        originalSum+=i;
    }
    int sum=0;
    for(int i=0;i<num.size();i++){
        sum+=num[i];
    }
    return originalSum-sum;
}
int main(){
    vector<int>num={0,1,2,3,4,6};
    cout<<missingNum(num);
}