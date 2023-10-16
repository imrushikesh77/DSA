class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        // sort(arr.begin(), arr.end());
        for(auto it:arr)cout<<it<<" ";
        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(2*arr[j]==arr[i] && i!=j)return true;
            }
        }
        return false;
    }
};