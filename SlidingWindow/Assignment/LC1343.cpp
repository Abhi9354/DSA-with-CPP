#include <bits/stdc++.h>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int count= 0;
        int sum = 0 ;       
        for(int i = 0 ;i<k;i++ ){
          sum += arr[i];
        }
        int i = 1;
        int j =k;
        if((int)(sum/k)>=threshold)count++;
         cout<<sum/k<<",";
        while(j<n){
            sum = sum-arr[i-1]+arr[j];
            if((int)(sum/k)>=threshold)count++;
            cout<<sum/k<<",";
            i++;
            j++;
        }
        return count;
    }
int main(){
    vector<int>arr={11,13,17,23,29,31,7,5,2,3};
    int k =3;
    int threshold= 5;
    cout<<numOfSubarrays(arr,k,threshold);

}