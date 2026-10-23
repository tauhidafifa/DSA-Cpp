#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> marks;
    marks["Afifa"]=100;
    marks["Zoya"]=99;
    marks["Atiya"]=95;
    marks.emplace("Zara",98);
    marks.insert({"Afifa",60});
    cout<<marks.count("Afifhhga");
   // marks.clear();
   cout<<marks.size()<<endl;
    for(auto x : marks){
        cout<<x.first<<": "<<x.second<<endl;
    }
   // cout<<"count is"<<marks.count("Afifa");
    
    /*if(marks.find("Atiyah")!=marks.end()){
        cout<<"found";
    } else{
        cout<<"not found";
    }*/
   


}