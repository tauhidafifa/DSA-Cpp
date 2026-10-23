#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int ,string> student;
    student[1]="John";
    student[2]="Alice";
    student[3]="Bob";
    student[4]="Sweety";
   
    //student[3]="Alice";
  
    cout<<student.size()<<endl;
    cout<<student.count(2);
    
}