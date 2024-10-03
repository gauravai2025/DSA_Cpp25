
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// You are given a square grid with n rows and n columns.Each cell contains either a '0' or a '1'.You can flip any cell of matrix to '0' or '1'.You need to perform minimum number of operations such that the matrix looks the same when rotated by 90, 180, 270 degrees in clockwise direction.: 
           
    void rotate(vector<vector<char>> &matrix, vector<vector<char>> &matrixr)
{

    int size = matrix.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrixr[j][size - 1 - i] = matrix[i][j];
        }
    }
}

void minimumoperations(vector<vector<char>> &matrix)
{
    int n = matrix.size();

    vector<vector<char>> matrix90(n, vector<char>(n));
    rotate(matrix, matrix90);

    vector<vector<char>> matrix180(n, vector<char>(n));
    rotate(matrix90, matrix180);

    vector<vector<char>> matrix270(n, vector<char>(n));
    rotate(matrix180, matrix270);

    int minop = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // calculate 0 and 1 in all 4 matrix to check which one is minimum for flip operation
            int cnt0 = 0, cnt1 = 0;

            if (matrix[i][j] == '0')
                cnt0++;
            else
                cnt1++;

            if (matrix90[i][j] == '0')
                cnt0++;
            else
                cnt1++;

            if (matrix180[i][j] == '0')
                cnt0++;
            else
                cnt1++;

            if (matrix270[i][j] == '0')
                cnt0++;
            else
                cnt1++;

            minop += min(cnt0, cnt1);
        }
    }
    // operation is performed on each cell so divide by 4 to get minimum operation
    cout << minop / 4 << "\n";
}

int main()
{
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    vector<vector<char>> matrix(size, vector<char>(size));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    minimumoperations(matrix);

    return 0;
}