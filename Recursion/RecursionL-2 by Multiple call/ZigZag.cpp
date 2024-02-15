#include <bits/stdc++.h>
using namespace std;
void zigzag(int n)
{
    if(n==0)return;
    cout << n ;
    zigzag(n-1);
    cout <<n ;
    zigzag(n-1);
    cout <<n ;

}
int main()
{
    for(int i=1 ;i<=4;i++){
        zigzag(i);
        cout<<endl;
    }
    return 0;
}