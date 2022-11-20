#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int rows = mat.size();
        int cols = mat[0].size();

        if ((rows * cols) != (r * c))
            return mat;

        vector<vector<int>> output_arr(r, vector<int>(c));
        int row_num = 0, col_num = 0;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                output_arr[row_num][col_num] = mat[i][j];
                col_num++;
                if (col_num == c)
                {
                    col_num = 0;
                    row_num++;
                }
            }
        }
        return output_arr;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}