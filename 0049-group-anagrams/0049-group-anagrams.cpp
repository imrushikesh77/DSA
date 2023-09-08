class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> map;
        for(auto it:strs){
            string temp = it;
            sort(it.begin(), it.end());
            map[it].push_back(temp);
        }

        for(auto it:map){
            ans.push_back(it.second);
        }
        return ans;
    }
};