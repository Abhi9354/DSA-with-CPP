#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v1, vector<int> &v2, vector<int> &v3)
{
    int i = 0;
    int j = 0;
    while(i<v1.size() || j<v2.size())
    {
        if(v1[i]<v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else
        {
            v3.push_back(v2[j]);
            j++;
        }
    }
}
int main()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(12);
    v2.push_back(10);
    v2.push_back(11);
    v2.push_back(15);
    // v2.push_back(117);
    // v2.push_back(149);
    // v2.push_back(169);
    // v2.push_back(178);
    sort(v1, v2, v3);
    for(auto i : v3)
    {
        cout<<" "<<i;
    }

    

}
