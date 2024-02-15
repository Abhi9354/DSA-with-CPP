
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v(arr,arr+n);
    sort(v.begin(),v.end());
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]==v[j])
        {
            cout<<v[i]<<" ";
            j++;
        }
    }
    return 0;
}