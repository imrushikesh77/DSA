class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++){
            int start = 0;
            int end = n-1;
            int target = arr[i]*2;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(arr[mid]==target && mid!=i)return true;
                if(arr[mid]<target){
                    start = mid +1;
                }
                else end = mid -1;
            }
        }
        return false;
    }
};