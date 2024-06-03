#include <bits/stdc++.h>
using namespace std;


class student{
public:
string name;
int rno;
float marks;

student(string name,int rno,float marks){
    this->name=name;
    this->rno=rno;
    this->marks=marks;

}
};

void change(student* s){
s->name="harsh";
}
int main(){
    // student s1("abhishek",45,94.5);
    // change(&s1);
    // cout<<s1.name<<" "<<s1.rno<<" "<<s1.marks<<endl;
    // student* ptr=&s1;
    // cout<<s1.name<<" "<<s1.rno<<" "<<s1.marks<<endl;

    // (*ptr).name="harsh";//instead of this we can use ptr->name
    // ptr->name="agjdsaf";
    // cout<<s1.name<<" "<<s1.rno<<" "<<s1.marks<<endl;


    student* s= new student("abhishek",45,90.5);
    cout<<s->name;
    change(s);
    cout<<s->name;
    return 0;
}


// #include <iostream>
    
//     using namespace std;
    
//     class student {
//     public:
//         string name;
//         int rno;
//         float marks;
    
//         student(string name, int rno, float marks) {
//             this->name = name;
//             this->rno = rno;
//             this->marks = marks;
//         }
//     };
    
//     void change(student* s) {
//         s->name = "harsh";
//     }
    
//     int main() {
//         student* s = new student("harsh", 45, 90.5);
//         cout << s->name;
//         change(s);
//         return 0;
//     }