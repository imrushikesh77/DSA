class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cnt = 1;
        int curr = arr[0];
        int qr = arr.size()/4;
        for(int i=1;i<arr.size();i++){
            if(curr==arr[i])cnt++;
            else cnt=1;
            if(cnt>qr)return arr[i];
            curr=arr[i];
        }
        return curr;
    }
};