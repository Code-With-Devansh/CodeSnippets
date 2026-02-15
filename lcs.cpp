int n1 = word1.length();
int n2 = word2.length();
vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
for(int i = 1; i<n1; i++){
    for(int j = 1; j<n2; j++){
        int take = 0;
        if(text1[i-1] == text2[j-1])
            take = 1 +(dp[i-1][j-1]);
        int skipi = dp[i-1][j];
        int skipj = dp[i][j-1];
        dp[i][j] = max(take, max(skipi, skipj));
    }
}