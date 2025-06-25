class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0;
        int sum2=0;
        for(auto i :gas)sum1+=i;
        for(auto i :cost)sum2+=i;
        if(sum1<sum2)return -1;
        int start=0,curr=0;
        for(int i =0;i<gas.size();i++){
            if(curr<0){
                curr=0;
                start=i;
            }
            curr+=gas[i]-cost[i];

        }
        return start;

    }
};