#include <iostream>
using namespace std;
void merge(int arr1[],int x,int arr2[],int y,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
   while(1){
    if(arr1[i]<arr2[j]){
      arr3[k]=arr1[i];
      k++;
      i++;
    }
   
    if(arr1[i]>=arr2[j]){
      arr3[k]=arr2[j];
      k++;
      j++;
    }
   
    if(i==x){
    while(j<y){
        arr3[k]=arr2[j];
        k++;
        j++;
    
    }
    break;
    }
    
    
    if(j==y){
    while (i<x){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    break;
   }}
   }
   
   void print(int ans[],int z){
    for( int i = 0 ; i<z;i++){
        cout<<ans[i]<<",";
    }
    cout<<endl;
   }

int main (){
    int arr1[]= {1,2,3,0,0,0};
    int m = 3;
    int arr2[]= {2,5,6};
int n = 3;
    int arr3[6]={0};
    
    merge(arr1,m,arr2,n,arr3);
    print(arr3,6);
    return 0;
}