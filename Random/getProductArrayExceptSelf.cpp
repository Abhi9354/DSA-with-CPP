#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr []= {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    int mod= 10^9+7;
    long int product = 1;
    int i= 0;
  while(product< mod && i<n){
    
      product = product * arr[i];
    i++;
        }

        for(int i = 0 ;i<n ;i++){
            arr[i]=product/arr[i];
        }

for(int i = 0 ; i<n;i++){
    cout<<arr[i]<<" ";
}

}
    