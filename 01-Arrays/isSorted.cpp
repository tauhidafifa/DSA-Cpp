#include <iostream> 
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n-1;i++){
        if(arr[i]<arr[i-1]){
            return false; 
        }
    }
    return true; 
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"enter an array of size n";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    } 
    cout<<isSorted(arr,n);

}