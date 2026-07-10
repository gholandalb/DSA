#include <bits/stdc++.h>
using namespace std;
 
int sum_column(vector<vector<int>>& board, int column_index, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += board[i][column_index];
    }
    return sum;
}
 
int sum_row(vector<vector<int>> board, int row_index, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += board[row_index][i];
    }
    return sum;
}
 
int main()
{
    int n = 0;
    cin >> n;
    vector<vector<int>>  board(n, vector<int>(n));
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    int winning_numbers = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sum_column(board, j, n) > sum_row(board, i, n))
                winning_numbers++;
        }
    }
    cout << winning_numbers;
    return 0;
}