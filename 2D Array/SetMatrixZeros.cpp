#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    // int row = matrix.size();
    // int col = matrix[0].size();
    // vector<bool> forRow(row, false);
    // vector<bool> forCol(col, false);
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (matrix[i][j] == 0)
    //         {
    //             forCol[j] = true;
    //             forRow[i] = true;
    //         }
    //     }
    // }

    // for (int i = 0; i < row; i++)
    // {

    //     for (int j = 0; j < col; j++)
    //     {
    //         if (forRow[i] == true || forCol[j] == true)
    //         {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Another approach space O(1)
    int row = matrix.size();
    int col = matrix[0].size();
    bool firstRow = false;
    bool firstCol = false;
    for (int i = 0; i < row; i++)
    {
        if (matrix[i][0] == 0)
        {
            firstCol = true;
            break;
        }
    }
    for (int j = 0; j < col; j++)
    {
        if (matrix[0][j] == 0)
        {
            firstRow = true;
            break;
        }
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int j = 1; j < col; j++)
    {
        if (matrix[0][j] == 0)
        {
            for (int i = 1; i < row; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < row; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 1; j < col; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (firstRow == true)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[0][j] = 0;
        }
    }
    if (firstCol == true)
    {
        for (int i = 0; i < row; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> v;
    v = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(v);
}