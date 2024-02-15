#include <iostream>
using namespace std;

int getLength(char name[]){
int count = 0;
for(int i= 0 ;name[i]!='\0';i++){
    count++;

}
return count;
}


int main (){
   char name [29];
   cout<<"Enter the value of char:"<<endl;
   cin>>name;
   cout<<"lenght is :"<<getLength(name);

}