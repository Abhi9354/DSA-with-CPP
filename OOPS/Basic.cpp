#include <bits/stdc++.h>
using namespace std;


class player{
    public:  //access modifier
    int health;   //Data Members      //Encapsulation defining data members in a class in which user can access them
    int level;

   void print(){ //Member Functions
        cout << health << endl;
        cout << level << endl;
        kills=10;
        cout<<kills<<endl;
    }
    
    private:      /*Abstraction in oops*/
    int kills;


    
};
int main(){
    player Abhishek;//object
    Abhishek.health = 100;
    Abhishek.level = 1;
    Abhishek.print();
    
    
    
    return 0;
}