#include <iostream>
using namespace std;
int placedFruits(int fruits[],int basket[],int n){
    int placed=0;
    int used[]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(used[j]==0 and basket[j]>=fruits[i]){
                used[j]=1;
                placed++;
                break;
            }
        }
    }
    return n-placed;
}
int main(){
    int fruits[]={3,6,8};
    int basket[]={2,0,1};
    cout<<placedFruits(fruits,basket,3);
}