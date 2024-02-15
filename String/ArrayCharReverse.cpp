#include <iostream>
using namespace std;
string getReverse(char name[],int n ){
    int start = 0 ;
    int end= n-1;
    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
    return name;
}
int getlenght(char name[]){
    int count = 0 ;
    for(int i = 0 ; name[i]!='\0';i++){
        count++;
           }
           return count;
}
int main(){
char name [10];
cin>>name;
int n = getlenght(name);

cout<<"Reverse array is :"<<getReverse(name,n);
}