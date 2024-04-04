#include <bits/stdc++.h>
using namespace std;

class Player{
    private:
int health;
bool alive;

public:
    void setHealth(int health){
        this->health = health;
    }
    void Alive(int Alive){
        this->alive = alive;
    }
    int getHealth(){
        return health;
    }
    bool getAlive(){
        return alive;
    }
};

Player getMaxHealth(Player a,Player b){  //passing object as parameter  and return class 
    if(a.getHealth()>b.getHealth()){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    Player Abhishek;
    Abhishek.setHealth(100);
    Abhishek.Alive(true);

    Player Ankit;
    Ankit.setHealth(80);
    Ankit.Alive(true);
    Player akshay=getMaxHealth(Abhishek,Ankit);//recieving class as parameter

    cout<<akshay.getHealth();
}