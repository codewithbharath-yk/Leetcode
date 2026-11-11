class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0) continue;
                bool special = true;
                for(int k=0;k<m;k++){
                  if(k!=j and mat[i][k]==1){
                    special = false;
                    break;
                  }
                }
                if(special == false) continue;
                for(int k=0;k<n;k++){
                    if(k !=i and mat[k][j]==1){
                        special = false;
                        break;
                    }
                }
                if(special)  ans++;
            }
        }
        return ans;
    }
};