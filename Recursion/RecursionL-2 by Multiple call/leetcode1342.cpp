

#include <bits/stdc++.h>
using namespace std;
class solution {
public:
 int numberOfSteps(int num) {
        int count =0;
        if(num==0)return 0;
        if(num%2==0)count=1+numberOfSteps(num/2);
        if(num%2!=0)count=1+numberOfSteps(num-1);
        
        return count;
    }
};

int main(){
    solution leetcode;
    cout<<leetcode.numberOfSteps(14);
    
}