int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int ans = 0;
    for (int i = 0; i <= accountsSize - 1; i++) {
        int sum = 0;
        for (int j = 0; j <= accountsColSize[i] - 1; j++) {
            sum = accounts[i][j] + sum;
            if (sum > ans) {
                ans = sum;
            }
        }
    }
    return ans;
}