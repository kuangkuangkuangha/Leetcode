#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // 定义dp返回 word1从i， word2从j开始的 最小步数
    int dp(string word1, int i, string word2, int j, vector< vector<int> >& memo)
    {
        if(i==word1.size())
            return word2.size()-j;

        if(j==word2.size())
            return word1.size()-i;

        if(memo[i][j]!=-1)
            return memo[i][j];

        if(word1[i]==word2[j])
            memo[i][j] = dp(word1, i+1, word2, j+1, memo);
        else
            memo[i][j] = min( dp(word1, i+1, word2, j, memo)+1, dp(word1, i, word2, j+1, memo)+1);

        return memo[i][j];
    }

    int minDistance(string word1, string word2) {
        vector< vector<int> > memo(word1.size(), vector<int>(word2.size(), -1));

        return dp(word1, 0, word2, 0,  memo);
    }
};