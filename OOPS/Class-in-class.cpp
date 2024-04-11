

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
    int health;
    int age;
    Gun gun; // class ke ander object banayenge
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
}