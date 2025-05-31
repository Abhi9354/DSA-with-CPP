// convert array into heap array


#include <iostream>
#include <vector>
using namespace std;
void heapify(vector<int>& arr , int i ,int n){
     while (1)
        {
            int leftChild = 2 * i;
            int rightChild = (2 * i) + 1;
            if (leftChild > n)  break;
            if (rightChild > n)
            {
                if (arr[i] > arr[leftChild])
                {
                    swap(arr[i], arr[leftChild]);
                    i = leftChild;
                }
                break;
            }

            if (arr[leftChild] > arr[rightChild])
            {
                if (arr[i] > arr[rightChild])
                {
                    swap(arr[i], arr[rightChild]);
                    i = rightChild;
                }
                else break;
            }
            else
            {
                if (arr[i] > arr[leftChild])
                {
                    swap(arr[i], arr[leftChild]);
                    i = leftChild;
                }
                else break;
            }
        }
}
int main(){
vector<int>arr={-1,10,2,14,11,1,4};   
int n = arr.size(); 
 for(int i = n/2; i>=1;i--){
    heapify(arr,i,n);
 }

 
for(auto i : arr)cout<<i<<",";

}