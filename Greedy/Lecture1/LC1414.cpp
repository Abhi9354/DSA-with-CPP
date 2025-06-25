class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        priority_queue<int>maxheap;
        int a = 1, b =1;
        if(k<b)maxheap.push(b);
        else{
            maxheap.push(a);
            maxheap.push(b);
            while(a+b <= k){
              int next= a+b;
              maxheap.push(next);
              a=b;
              b=next;
            }
        }
        int count= 0;
        while(1){
            int first= maxheap.top();
            if(k-first <0) maxheap.pop();
            else{
             k=k-first;
            maxheap.pop();
             count++;
            }
            if(k==0)break;            
        }
        return count;
    }
};