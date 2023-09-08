class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> num(numRows);
    for(int i=0;i<numRows;i++){
        num[i].resize(i+1);
        num[i][0] = num[i][i] = 1;
        for(int j=1;j<i;j++){
            num[i][j]=num[i-1][j-1]+num[i-1][j];
        }
    }
    return num;
    }
};