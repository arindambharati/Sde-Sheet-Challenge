#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    set<int> s_row,s_column; 
    for(int row = 0; row < matrix.size(); row++) {
        for(int col = 0; col < matrix[0].size(); col++) {
            if(matrix[row][col] == 0) {
                s_row.insert(row);
                s_column.insert(col);
            }                
        }
    }
    
    for(auto row : s_row) {
        for(int col = 0; col < matrix[0].size(); col++) {
            matrix[row][col] = 0;
        }
    }
    
    for(auto col : s_column) {
        for(int row = 0; row < matrix.size(); row++) {
            matrix[row][col] = 0;
        }
    }
    
}
