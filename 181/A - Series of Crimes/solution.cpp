#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int rows, columns;
    cin >> rows >> columns;
    vector<vector<char>> map(rows, vector<char>(columns));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> map[i][j];
        }
    }
 
    int r = 0, c = 0;
 
    for (int i = 0; i < rows; i++)
    {
        int robberies_in_row = 0;
        for (int j = 0; j < columns; j++)
        {
            if (map[i][j] == '*')
                robberies_in_row++;
        }
        if (robberies_in_row == 1)
            r = i + 1;
    }
    for (int i = 0; i < columns; i++)
    {
        int robberies_in_column = 0;
        for (int j = 0; j < rows; j++)
        {
            if (map[j][i] == '*')
                robberies_in_column++;
        }
        if (robberies_in_column == 1)
            c = i + 1;
    }
    cout << r << " " << c;
    return 0;
}