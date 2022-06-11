#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int row_s = matrix.size();
    int col_s = matrix[0].size();
    vector<int> row(row_s, -1);
    vector<int> col(col_s, -1);
    for (int i = 0; i < row_s; i++)
    {
        for (int j = 0; j < col_s; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for (int i = 0; i < row_s; i++)
    {
        for (int j = 0; j < col_s; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}