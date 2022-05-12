#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:

    // 定义dp函数为：string1从i开始到末尾 和 string2从j开始到末尾 转换成相同 的最少操作数
    int dp(string& word1, int i, string& word2, int j, vector< vector<int> >& memo)
    {
        if(j == word2.size())
            return word1.size()-i;

        if(i == word1.size())
            return word2.size()-j;

        if(memo[i][j]!=-1)
            return memo[i][j];

        if(word1[i]==word2[j])
            memo[i][j] = dp(word1, i+1, word2, j+1, memo);
        else
        {
            int a = dp(word1, i, word2, j+1, memo)+1;  // 插入
            int b = dp(word1, i+1, word2, j, memo)+1;   // 删除
            int c = dp(word1, i+1, word2, j+1, memo)+1;

            memo[i][j] = min(min(a,b), c);
        }

        return memo[i][j];
    }

    int minDistance(string word1, string word2) {
        vector< vector<int> > memo(word1.size(), vector<int>(word2.size(), -1));
        return dp(word1, 0, word2, 0, memo);
    }
};