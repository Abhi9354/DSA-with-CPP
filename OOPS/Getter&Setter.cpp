#include <bits/stdc++.h>
using namespace std;

class Car{
  private:
  string name;
  int mileage;
  int topspeed;

 public:
 void setter(string name, int mileage, int topspeed){
     this->name=name;
     this->mileage=mileage;
     this->topspeed=topspeed;
 }
 string getterCarName(){
     return name;
 }

  int getterCarMileage(){
     return mileage;
 }
  int getterCartopspeed(){
     return topspeed;
 }


};

int main(){
    Car Toyoto;
    Toyoto.setter("toyoto", 25, 240);
    cout<<Toyoto.getterCarName();
    cout<<endl;
    cout<<Toyoto.getterCarMileage();
    cout<<endl;
    cout<<Toyoto.getterCartopspeed();

}