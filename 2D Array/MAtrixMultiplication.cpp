#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "Enter the row of 1st matrix" << endl;
    cin >> m;
    int n;
    cout << "Enter the column of 1st matrix" << endl;
    cin >> n;
    int p;
    cout << "Enter the row of 1st matrix" << endl;
    cin >> p;
    int q;
    cout << "Enter the column of 1st matrix" << endl;
    cin >> q;
    if (n != p)
    {
        cout << "Multiplication is not possible";
    }
    else
    {
        int a[m][n];
        int b[p][q];
        cout << "enter the value of 1st matrix" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "enter the value of 2nd matrix" << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        cout << "1st Matrix is " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << "2nd Matrix is " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

        int res[m][q];
        // multiplying two matrices
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        cout << "resultant matrix after multiplication " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}   
