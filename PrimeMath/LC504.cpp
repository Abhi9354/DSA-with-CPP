#include <bits/stdc++.h>
using namespace std;
int main(){
    int num= 28;
    int sum =1;
        for(int i = 2; i<=sqrt(num) ; i++)if(num%i==0)sum = sum + i + num/i;
        if(sum==num && num!=1)return true ;
        else return false;
}