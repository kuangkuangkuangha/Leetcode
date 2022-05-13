#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:

    // dp定义为从【i】【j】加到 最后 的总和;
    int dp(vector<vector< int> >& matrix, int i, int j, vector< vector<int> >& memo)
    {
        if(i==matrix.size() || j==matrix.size() || j==-1)   // 超出方形边界的情况
            return 9999999;

        if(i==matrix.size()-1)          // 递归返回条件
            return matrix[i][j];

        if(memo[i][j]!=0)
            return memo[i][j];

        memo[i][j] = matrix[i][j] + min(
            min (dp(matrix, i+1, j-1, memo),
            dp(matrix, i+1, j, memo)),
            dp(matrix, i+1, j+1, memo)
        );

        return memo[i][j];
    }
 
    int minFallingPathSum(vector< vector<int> >& matrix) {
        int n = matrix.size();
        vector< vector<int> > memo(n, vector<int>(n, 0));

        int res = 999999;
        for(int i=0; i<matrix.size(); i++)
        {
            res = min(res, dp(matrix, 0, i, memo));
        }

        return res;
    }
};
