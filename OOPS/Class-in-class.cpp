

#include <bits/stdc++.h>
using namespace std;

class Gun
{
public:
    int ammo;
    int damage;
};
class Player
{
private:
 class Helmet
    {
        private:
        int health;
        public:
        void setHealth(int health)
        {
            this->health = health;
        }
        int getHealth()
        {
            return health;
        }   
    };
    int health;
    int age;
    Gun gun; // class ke ander object banayenge
    Helmet helmet;
   


public:
    void setHealth(int health)
    {
        this->health = health;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getHealth()
    {
        return health;
    }
    int getAge()
    {
        return age;
    }

    Gun getGun()
    {
        return gun;
    }

    void setGun(Gun gun)
    {
        this->gun = gun;
    }



    void setHelmet(int health){
        Helmet *helmet= new Helmet;//this function make an object of class which is inside the class
        helmet->setHealth(health);
        this->helmet= *helmet;
    }
    void getHelmet(){
        cout << helmet.getHealth() << endl;
        
    }
};
int main()
{
    Gun Akm;
    Akm.ammo = 10;
    Akm.damage = 100;

    Player Abhishek;
    Abhishek.setHealth(100);
    Abhishek.setAge(20);
    cout << Abhishek.getHealth() << endl;
    cout << Abhishek.getAge() << endl;

    Abhishek.setGun(Akm); // passing object as parameter
    cout << Abhishek.getGun().ammo << endl;
    cout << Abhishek.getGun().damage << endl;

    Abhishek.setHelmet(92);
     Abhishek.getHelmet();
    

}