#include <iostream>
using namespace std;
int main (){
  int m , n;
    cin>>m>>n;
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    //Transpose
     for(int i = 0;i<m;i++){
    for(int j = i;j<n;j++){
        swap(arr[i][j],arr[j][i]);
    }
   }
   //Sine waves
    for(int i = 0 ; i<m ; i++){
    int s = 0 ;
    int e = n-1;
    if(i%2==1)
    while(s<e)swap(arr[i][s++],arr[i][e--]);    
   }
    
    for(int i = 0;i<m;i++){
    for(int j = 0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;}
}