#include <bits/stdc++.h>
using namespace std;

class Bike {
   public:
    static int noOfBikes;//this belongs to class not object and u can access it without creating object
    int tyresize;
    int Engine;
    static void increase(){
        noOfBikes++;
    }
};
int Bike::noOfBikes=2;//ye sab object ke liye same hai
// void add(){
//        static int b =10 ;//ek hi baar memory assign hogi
//         cout<<b<<endl;
//         b++;
//     }
int main(){
    // add();
    // add();
    // add();
    Bike Tvs;
    Tvs.increase();
    cout<<Tvs.noOfBikes<<endl;
}   