 #include <bits/stdc++.h>
using namespace std;
 bool search(vector<int>& arr, int target) {
        set<int>s;
        copy(arr.begin(),arr.end(),inserter(s,s.begin()));
        arr.clear();
        copy(s.begin(),s.end(),back_inserter(arr));
        int n = arr.size();
        int l=0;
        int h= n-1;
        if(n<=2){
            if(n==1){
                if(arr[0]==target){
                    return true;
                }
                else{
                    return false;
                }
            }
           else{
                if(target==arr[1]){
                    return true;
                }
                else if(target==arr[0])return true;
                else return false;
           }
        }
        int pivot=-1;
        
        while(l<=h){
            int mid = l+(h-l)/2;
            if(mid==0)l=mid+1;
            else if(mid==n-1)h=mid-1;
            else if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]) {pivot=mid;
            break;}
            else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){pivot=mid+1;
            break;}
            else if(arr[mid]>arr[h])l=mid+1;
            else h=mid-1;
        }
        if(pivot==-1){
             l= 0;
             h=n-1;
            while(l<=h){
                 int mid = l+(h-l)/2;
                if(arr[mid]==target)return true;
                else if(arr[mid]>target) h=mid-1;
                else l=mid+1;
            }
            return false;
        }

        if(target>=arr[0]  && target<=arr[pivot-1]){
             l= 0;
             h=pivot-1;
            while(l<=h){
                 int mid = l+(h-l)/2;
                if(arr[mid]==target)return true;
                else if(arr[mid]>target) h=mid-1;
                else l=mid+1;
            }
        }
        else{
             l= pivot;
             h=n-1;
            while(l<=h){
                 int mid = l+(h-l)/2;
                if(arr[mid]==target)return true;
                else if(arr[mid]>target) h=mid-1;
                else l=mid+1;
            }
        }

        return false;
    }
    int main(){
     
vector<int>arr;
arr={2,4,5,6,7,0,0,1};
int target = 0;
cout<<search(arr,target);

}