

#include <bits/stdc++.h>
using namespace std;


class Gun{
private:
int ammo;
int damage;
};
class Player{
    private:
    int health;
    int age;
    Gun gun;  //class ke ander class banayenge
    public:
    void setHealth(int health){
        this->health = health;
    }
     void setAge(int age){
        this->age = age;
    }
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }

    Gun getGun(){
        return gun;
    }

    void setGun(Gun gun){
        this->gun=gun;
    }
};
int main(){
    Gun Akm;
   
    Player Abhishek;
    Abhishek.setHealth(100);
    Abhishek.setAge(20);
    cout<<Abhishek.getHealth();
    
   
}