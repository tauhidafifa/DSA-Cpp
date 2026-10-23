#include <iostream>
#include <map>
using namespace std;
bool check(int a1[],int a2[],int n1,int n2){
    map<int,int> m1,m2;
    for(int i=0;i<n1;i++){
        m1[a1[i]]++;
    }
    for(int i=0;i<n2;i++ ){
        m2[a2[i]]++;
    }
    if(m1.size() !=m2.size()){
        return false;
    }
    return m1==m2;

}
int main(){
    int a1[]={1,2,3};
    int a2[]={2,1,3};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    cout<<check(a1,a2,n1,n2);
}