class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        ans.push_back(pref[0]);
        int preXor = ans[0];
        int crossXor = ans[0];
        for(int i=1;i<pref.size();i++){
            crossXor ^= pref[i];
            ans.push_back(crossXor);
            preXor ^= crossXor;
            crossXor = preXor;
        }
        return ans;
    }
};