// Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

// A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

// Example 1:

// Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
// Output: [15]
// Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column
// Example 2:

// Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
// Output: [12]
// Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 3:

// Input: matrix = [[7,8],[1,2]]
// Output: [7]
// Explanation: 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 4:

// Input: matrix = [[3,6],[7,1],[5,2],[4,8]]
// Output: []
// Explanation: There is no lucky number.

// Constraints:

// m == mat.length
// n == mat[i].length
// 1 <= n, m <= 50
// 1 <= matrix[i][j] <= 105.
// All elements in the matrix are distinct.

#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v)
{
    cout << "The Given Array looks like - [ ";

    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
            cout << v[i];
        else
            cout << v[i] << ", ";
    }

    cout << " ] " << endl;
}

class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        vector<int> RowMin{};
        vector<int> ColMax{};
        vector<int> resultant;

        for (int i = 0; i < m; i++)
        {
            int min = INT_MAX;
            for (int j = 0; j < matrix[i].size(); j++)
                if (matrix[i][j] < min)
                    min = matrix[i][j];
            RowMin.push_back(min);
        }

        for (int i = 0; i < matrix[0].size(); i++)
        {
            int max = INT_MIN;
            for (int j = 0; j < m; j++)
                if (matrix[j][i] > max)
                    max = matrix[j][i];
            ColMax.push_back(max);
        }

        for (int i = 0; i < m; i++)
            for (int j = 0; j < matrix[i].size(); j++)
                if (matrix[i][j] == RowMin[i] && matrix[i][j] == ColMax[j])
                    resultant.push_back(matrix[i][j]);

        return resultant;
    }
};

int main()
{
    system("CLS");
    Solution obj;
    vector<vector<int>> matrix = {{3, 7, 8}, {9, 11, 13}, {15, 16, 17}};
    vector<int> resultant = obj.luckyNumbers(matrix);
    print_vector(resultant);

    vector<vector<int>> matrix2 = {{1, 10, 4, 2}, {9, 3, 8, 7}, {15, 16, 17, 12}};
    vector<int> resultant2 = obj.luckyNumbers(matrix2);
    print_vector(resultant2);

    vector<vector<int>> matrix3 = {{7, 8}, {1, 2}};
    vector<int> resultant3 = obj.luckyNumbers(matrix3);
    print_vector(resultant3);

    vector<vector<int>> matrix4 = {{3, 6}, {7, 1}, {5, 2}, {4, 8}};
    vector<int> resultant4 = obj.luckyNumbers(matrix4);
    print_vector(resultant4);
    return 0;
}