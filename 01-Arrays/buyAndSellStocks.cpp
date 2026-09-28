#include <iostream>
#include <algorithm>
using namespace std;

int stock(int arr[], int n){
    int minPrice = arr[0];
    int maxProfit = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < minPrice){
            minPrice = arr[i];
        } else {
            int profit = arr[i] - minPrice;
            maxProfit = max(maxProfit, profit);
        }
    }
    return maxProfit;
}

int main(){
    int arr[]={7,1,5,6,4};
    int n=5;
    cout<<stock(arr,n);
    return 0;
}