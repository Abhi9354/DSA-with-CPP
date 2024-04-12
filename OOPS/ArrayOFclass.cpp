#include <bits/stdc++.h>
using namespace std;

class Player{
    private:
    int health;
    int level;
    public:
    void setHealth(int health){
        this->health = health;
    }
    int getHealth(){
        return health;
    }
    void setLevel(int health){
        this->level = level;
    }
    int getlevel(){
        return level;
    }
};
int main(){
    Player Aman;
    Player Abhi;
    Aman.setHealth(45);
    Abhi.setHealth(55);
    Player player[2]={Aman,Abhi};//array of objects
    cout<<player[0].getHealth()<<endl;
    cout<<player[1].getHealth()<<endl;
}