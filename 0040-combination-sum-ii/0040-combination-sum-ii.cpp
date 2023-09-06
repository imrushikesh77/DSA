class Solution {
public:
    void ans(int n, int k, vector<int> &arr, vector<int>&empty, vector<vector<int>> &result){
        if(k==0){
            result.push_back(empty);
            return;
        }
        for(int i=n;i<arr.size();i++){
            if(i>n && arr[i]==arr[i-1])continue;
            if(arr[i]>k)break;
            empty.push_back(arr[i]);
            ans(i+1,k-arr[i],arr,empty,result);
            empty.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> empty;
        ans(0,target,candidates,empty,result);
        return result;
    }
};