// Very Good Question

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0’s, and return the matrix.

// You must do it in place.
// Expected Time Complexity: O(m x n)
// Expected Space Complexity: O(1)

// SOLUTION: Approach is to first find whether there is any 0 in first row and
// we'll use a flag for that, after that we'll iterate through the matrix and for
// every 0 in the matrix we'll mark the 0 in the matrix[0][i] and matrix[j][0].
// Finally we'll mark all the rows and columns as zeroes for 0 in the first row and
// column, but the corner case is that we'll not evalute 0,0 if it's zero as it'll
// mark all the rows in the first column as 0 .
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
vector<vector<int>> solve(vector<vector<int>> matrix)
{
    // CODE HERE
    int m = matrix.size(), n = matrix[0].size();
    int r = 0, c = 0;
    for (int i = 0; i < n; i++)
        if (matrix[0][i] == 0)
        {
            r = 1;
            break;
        }
    for (int i = 0; i < m; i++)
        if (matrix[i][0] == 0)
        {
            c = 1;
            break;
        }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (matrix[0][i] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[j][i] = 0;
            }
        }
    }
    for (int i = 1; i < m; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (r == 1)
    {
        for (int i = 0; i < n; i++)
            matrix[0][i] = 0;
    }
    if (c == 1)
        for (int i = 0; i < m; i++)
            matrix[i][0] = 0;
    return matrix;
}