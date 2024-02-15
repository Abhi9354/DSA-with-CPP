
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(arr[0])/sizeof(arr[0][0]);           
    cout<<n<<endl<<m<<endl;
   for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<m ; j++){
           cout << arr[i][j] << " ";
    }
    cout<<endl;
   }

   for(int i = 0;i<n;i++){
    for(int j = i;j<m;j++){
        swap(arr[i][j],arr[j][i]);
    }
   }
   cout<<"transpose matrix"<<endl;
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<m ; j++){
           cout << arr[i][j] << " ";
    }
    cout<<endl;
   }
   cout<<"rotate Matrix"<<endl;
   for(int i = 0 ; i<n ; i++){
    int s = 0 ;
    int e = m-1;
    while(s<e)swap(arr[i][s++],arr[i][e--]);    
   }
   for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<m ; j++){
           cout << arr[i][j] << " ";
    }
    cout<<endl;
   }

}