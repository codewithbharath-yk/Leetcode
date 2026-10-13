class Solution {
    public int maximumWealth(int[][] accounts) {
        int m = accounts.length;
        int n = accounts[0].length;
        int maxwealth = 0;
        for(int i=0;i<m;i++){
           int wealth =0;
            for(int j=0;j<n;j++){
                wealth = wealth + accounts[i][j];
            }
          maxwealth=Math.max(maxwealth,wealth);
        }
        return maxwealth;
    }
}