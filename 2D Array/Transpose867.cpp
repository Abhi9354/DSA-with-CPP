#include <bits/stdc++.h>
using namespace std;

        //  BY ADDITION VECTOR
// vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         vector<vector<int>>t;
//         for(int i = 0;i<matrix.size();i++){
//             for(int j = 0 ; j<matrix[0].size();j++){
//                 t[j][i]=matrix[i][j];
//             }
//         }
//         for (int i=0;i<3;i++) {
//         for (int j = 0;j<3;j++){
//             cout<< t[i][j]<<",";
//         }
//     }
//     }

// int main(){
//     vector<vector<int>>matrix(3,vector<int>(3));
//     for (int i=0;i<3;i++) {
//         for (int j = 0;j<3;j++){
//             cin >> matrix[i][j];
//         }}
//     transpose(matrix);  

      
// }
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
  cout<<endl;
   for(int i = 0 ; i<n;i++){
    for(int j = i ; j<m ; j++){
           swap(arr[i][j],arr[j][i]);
    }

   }
   for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<m ; j++){
           cout << arr[i][j] << " ";
    }
    cout<<endl;
   }


}