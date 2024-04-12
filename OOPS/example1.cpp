#include <bits/stdc++.h>
using namespace std;
class Cricketer{
  public:  
char name;
int age ;
int as;//average score
int notm;//number of test match


// void setName(){

// }
// void setAge(){
// }
// void setAs(){
// }
// void setNotm(){
// }


};
int main(){
    vector<Cricketer>cricketers;


    for(int i = 0 ;i<2;i++){
        Cricketer *cricketer = new Cricketer;
        cricketer->name='c';
        cricketer->age=35;        
        cricketer->as=200;
        cricketer->notm=10;
        cricketers.push_back(*cricketer);
    }
    // Cricketer dhoni;
    // dhoni.name='d';
    // dhoni.age=35;
    // dhoni.as=200;
    // dhoni.notm=10;
    // Cricketer virat;
    // virat.name='v';
    // virat.age=35;
    // virat.as=200;
    // virat.notm=10;


    // Cricketer cricketers[2]={dhoni,virat};

    for(int i = 0; i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].as<<endl;
        cout<<cricketers[i].notm<<endl;
    }
    
}