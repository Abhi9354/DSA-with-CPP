#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    //     string s = "lordvoldemort";
    //     int n = s.size();
    //     sort(s.begin(),s.end());
    //     cout<<s;
    //     char remember=s[0];
    //     int maxcount=1;
    //     int temp= 0;
    //     for(int i = 0 ; i<n-1;i++){
    //        if(s[i]==s[i+1]){
    //         maxcount++;
    //        }
    //        if(s[i]!=s[i+1]){
    //         if(temp<maxcount){
    //         temp=maxcount;
    //         remember= s[i];
    //         }
    //         maxcount=1;
    //        }
    // }
    // cout<<temp<<endl;
    // cout<<remember;

    int arr[26] = {0};
    int n = 26;
    
    int temp = 0;
    string s = "anagram";
    for (int i = 0; i < s.length(); i++)
    {
        arr[(int)(s[i]) - 97]++;
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > temp)
        {
            temp= arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i]=temp)
        {
            cout<<(char)(i+97)<<"="<<temp;
            break;
            
        }
    }
}