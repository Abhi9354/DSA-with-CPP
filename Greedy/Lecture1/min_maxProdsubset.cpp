#include <iostream>
#include <vector>   
    #include <algorithm>
    using namespace std;
    vector<long long> maxMinProduct(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int zeros = 0, negas = 0, posi = 0, n = arr.size();
        long long minprod = 1, maxprod = 1;

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) negas++;
            else if (arr[i] == 0) zeros++;
            else posi++;
        }

        if ((posi && zeros == 0 && negas == 0) || (posi > 0 && zeros > 0 && negas == 0)) {
            minprod = arr[0];
            for (int i = 0; i < n; i++)
                if (arr[i] != 0) maxprod *= arr[i];
        }
        else if (negas % 2 == 1) {
            for (int i = 0; i < n; i++) {
                if (arr[i] != 0) minprod *= arr[i];
                if (arr[i] == 0) continue;
                if (arr[i] < 0 && negas > 1) {
                    maxprod *= arr[i];
                    negas--;
                }
                if (arr[i] > 0) maxprod *= arr[i];
            }
        }
        else {
            for (int i = 0; i < negas - 1; i++) {
                minprod *= arr[i];
                maxprod *= arr[i];
            }
            maxprod *= arr[negas - 1];
            for (int i = negas; i < n; i++) {
                if (arr[i] != 0) {
                    minprod *= arr[i];
                    maxprod *= arr[i];
                }
            }
        }

        if (posi == 0 && negas <= 1 && maxprod == 1) maxprod = 0;
        if (posi == 0 && negas == 0 && zeros > 0) minprod = 0;

       cout<< "Max Product: " << maxprod << endl;
       cout<< "Min Product: " << minprod << endl;
    }


int main()
{
    vector<int> arr = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0};
     maxMinProduct(arr);

}