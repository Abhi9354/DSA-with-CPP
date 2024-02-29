// //count the no. of elements in given array greater than a given number x
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
// 	int n;
// 	cout<<"Enter the value of n:";
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
//   for(int i = 0 ;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// 	int x;
// 	cout<<"enter the value of x:";
// 	cin>>x;
// 	int count=0;
// 	for(int i=0;i<=n-1;i++){
// 		if(arr[i]>x)
// 		count++;
// 	}
// 	cout<<count;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
	// Creating a vector
	vector<int> nums;
	nums = {1, 2, 1, 3, 4};

	// creating a set
	set<int> sol;
	// coping vector into set
	copy(nums.begin(), nums.end(), inserter(sol, sol.begin()));

	nums.clear(); // here this built in function
	cout << "nums vector is : ";

	nums.shrink_to_fit();//here capacity would be 0
  for(int i = 0; i<4;i++){
	cout<<nums[i]<<",";
  }
  cout<<endl;
	
	copy(sol.begin(), sol.end(), back_inserter(nums));

	for (auto i : nums)
{
	cout << i << ",";
}
}


// // coping set into vector
// copy(sol.begin(), sol.end(), back_inserter(nums));
// // just checking nums vector;

// for (auto i : nums)
// {
// 	cout << i << ",";
// }
// }