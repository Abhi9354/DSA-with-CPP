
class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>q;
        for(auto i : s)m[i]++;
        for(auto i : m){
            int a = i.second;
            char b = i.first;
            pair<int,char>p;
            p.first=a;
            p.second= b;
            q.push(p); 
        }
        string ans= "";
        while(q.size()>1){
           pair<int,char>firstplace= q.top();
           q.pop();
           pair<int,char>secondplace= q.top();
           q.pop();
           ans.push_back(firstplace.second);
           ans.push_back(secondplace.second);
           --firstplace.first;
           --secondplace.first;
          if(firstplace.first>0) q.push(firstplace);
          if(secondplace.first>0)q.push(secondplace);
        }
      if(q.size()!=0){ pair<int,char>lastitem=q.top();
       while(lastitem.first>0){
        ans.push_back(lastitem.second);
        lastitem.first--; 
       }}
       for(auto i : ans)cout<<i<<",";
       for(int i = 0 ; i<ans.size()-1;i++){
          if(ans[i] == ans [i+1])return "";
       }
       return ans;
    }
};