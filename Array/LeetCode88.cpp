#include <iostream>
using namespace std;
void sort(int arr1[], int arr2[], int m, int n)
{
    
   
    if (m > n)
    {
         int i = m - n - 1;
    int j = n - 1;
    int k = m - 1;
        while (k >= 0)
        {
            if (arr1[i] < arr2[j])
                arr1[k--] = arr2[j--];
            else
                arr1[k--] = arr1[i--];
            if (i < 0 || j < 0)
                break;
        }

        if (i < 0)
        {
            while (k >= 0)
            {
                arr1[k--] = arr2[j--];
            }
        }
        if (j < 0)
        {
            while (k >= 0)
            {
                arr1[k--] = arr1[i--];
            }
        }
    }


    else{
         int j = n - m - 1;
    int i = m - 1;
    int k = n- 1;
         
         while (k >= 0)
        {
            if (arr1[i] < arr2[j])
                arr2[k--] = arr2[j--];
            else
                arr2[k--] = arr1[i--];
            if (i < 0 || j < 0)
                break;
        }

        if (i < 0)
        {
            while (k >= 0)
            {
                arr2[k--] = arr2[j--];
            }
        }
        if (j < 0)
        {
            while (k >= 0)
            {
                arr2[k--] = arr1[i--];
            }
        }
    }






}
int main()
{
    int arr1[] = {3, 7};
    int arr2[9] = {1, 3, 5 , 9 , 19, 69, 99};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr1, arr2, m, n);
    

    if(m>n){
    for (int a= 0; a < m; a++)
    {
        cout << arr1[a] << " ";
    }}
    else{
    for (int a= 0; a < n; a++)
    {
        cout << arr2[a] << " ";
    }}
}