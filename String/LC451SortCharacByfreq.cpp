
#include <bits\stdc++.h>
using namespace std;
int main()
{

    string str = "tree";

    vector<int> ascii(150, 0);
    for (int i = 0; i < str.size(); i++)
    {
        int asciitable = int(str[i]);
        ascii[asciitable]++;
    }
    for (int i = 0; i < ascii.size(); i++)
    {
        cout << i << "-->" << ascii[i] << endl;
    }

    vector<int> freq;
    for (int i = 0; i < ascii.size(); i++)
    {
        if (ascii[i] > 0)
            freq.push_back(ascii[i]);
    }

    sort(freq.begin(), freq.end(), greater<int>());
    for (auto i : freq)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> index(freq.size());
    int temp = 0;
    for (int i = 0; i < freq.size(); i++)
    {
        
        for (int j = 0; j < ascii.size(); j++)
        {
            
            if (freq[i] == ascii[j])
            {
                ascii[j]=0;
                 index[i] = j;
                
                break;
                }
                
            }
        }
    

for (auto i : index)
{
    cout << i << " ";
}

int sum = 0;
for (int i = 0; i < freq.size(); i++)
{
    sum += freq[i];
}
int count = 1;
int i = 0;
string ans = "";
while (count <= sum)
{
    if (freq[i] == 0)
    {
        i++;
    }
    ans += char(index[i]);
    count++;
    freq[i]--;
}
cout<<ans;
}
