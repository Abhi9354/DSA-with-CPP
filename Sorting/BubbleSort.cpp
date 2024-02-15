#include <iostream> 
using namespace std;
int main(){
    int arr[]= {5,2,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i];
    }
    cout<<endl<<"After Sort"<<endl;
    for(int i = 0 ; i<n-1; i++){
        bool flag = true;
        for(int j = 0 ; j<n-1-i;j++){// - i is optimising
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false; // set the flag to false as we have swapped elements.
            }
        }
        if(flag==true){
            break;
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i];
    }
}