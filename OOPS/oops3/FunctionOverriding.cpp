#include <bits/stdc++.h>
using namespace std;

class Vehicle{
public:
   virtual void run(){//virtual karte hi uski runtime binding hoti hai
        cout<<"vehicle is running"<<endl;
    }
    };
    
    class Bike:public Vehicle{//agar main parent ka function virtual hai toh agle jitne bhi inheritance hogi like A->b->c toh c ke run function chalega kyuki main class ka function virtual tha isliye automatic b ka bhi function virtual ho jayega
        public:
        void run(){
            cout<<"bike is running"<<endl;
        }
    };
int main(){
    Bike b;
    b.run(); //bike ke pass dono function hai lekin isne bike vala hi kyu chalaya hai 
    b.Vehicle::run(); //ye tarika hai parent ka function chalane ke liye 


    //there is an another way to call parent class function
    Vehicle *a;
    
    Bike tvs;
    a=&tvs;//a hai vehicle type ka lekin isne store kiya hai bike ko toh compile time ke hisab se toh vehicle chalna chahiye but tvs hai bike type ka kayede se isko b ka function run krna chahiye toh iska solution hai run time  jiske liye hum virtual lga dete hai function ke aage jisse compiler jab padhta hai code ko toh virtual se use runtime mai chalta hai
    a->run();

    a= new Vehicle;
    a->run();
    
}

//runtime binding mai vptr or vtable generate hojate hai jiski vageh se runtime binding achieve ho pati hai
