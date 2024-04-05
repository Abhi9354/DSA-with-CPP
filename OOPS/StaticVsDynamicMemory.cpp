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


int main(){
    Player Abhishek;
    Abhishek.setHealth(100);
    Abhishek.Alive(true);

    Player Ankit;
    Ankit.setHealth(80);
    Ankit.Alive(true);
   
   Player *akshay=new Player;   //dynamic memory  int *a=new int(10);
    akshay->setHealth(90);
    akshay->Alive(true);
    cout<<akshay->getHealth();

    
}