#include <bits/stdc++.h>
using namespace std;
int main()
{

    // string sentence = "the sky is blue";
    // string solution = "";
    // int startindex = 0;
    // int endindex = 0;

    // for (int i = 0; i <= sentence.length(); i++)
    // {
    //     if (sentence[i] == ' ' || sentence[i] == '\0')
    //     {
    //         endindex = i - 1;
    //         int lenght = endindex - startindex + 1;
    //         string currword = sentence.substr(startindex, lenght);

    //         solution = currword+solution;
    //         startindex = i + 1;
    //     }
    // }

    // cout << solution;
    // cout << endl;
    // cout << solution.length();

    string s = "the sky is blue";
    stringstream ss(s);
    string temp, temp1;
    while (ss >> temp)
        temp1 = temp + " " + temp1;
    temp1.pop_back();
    cout << temp1 << endl;
}