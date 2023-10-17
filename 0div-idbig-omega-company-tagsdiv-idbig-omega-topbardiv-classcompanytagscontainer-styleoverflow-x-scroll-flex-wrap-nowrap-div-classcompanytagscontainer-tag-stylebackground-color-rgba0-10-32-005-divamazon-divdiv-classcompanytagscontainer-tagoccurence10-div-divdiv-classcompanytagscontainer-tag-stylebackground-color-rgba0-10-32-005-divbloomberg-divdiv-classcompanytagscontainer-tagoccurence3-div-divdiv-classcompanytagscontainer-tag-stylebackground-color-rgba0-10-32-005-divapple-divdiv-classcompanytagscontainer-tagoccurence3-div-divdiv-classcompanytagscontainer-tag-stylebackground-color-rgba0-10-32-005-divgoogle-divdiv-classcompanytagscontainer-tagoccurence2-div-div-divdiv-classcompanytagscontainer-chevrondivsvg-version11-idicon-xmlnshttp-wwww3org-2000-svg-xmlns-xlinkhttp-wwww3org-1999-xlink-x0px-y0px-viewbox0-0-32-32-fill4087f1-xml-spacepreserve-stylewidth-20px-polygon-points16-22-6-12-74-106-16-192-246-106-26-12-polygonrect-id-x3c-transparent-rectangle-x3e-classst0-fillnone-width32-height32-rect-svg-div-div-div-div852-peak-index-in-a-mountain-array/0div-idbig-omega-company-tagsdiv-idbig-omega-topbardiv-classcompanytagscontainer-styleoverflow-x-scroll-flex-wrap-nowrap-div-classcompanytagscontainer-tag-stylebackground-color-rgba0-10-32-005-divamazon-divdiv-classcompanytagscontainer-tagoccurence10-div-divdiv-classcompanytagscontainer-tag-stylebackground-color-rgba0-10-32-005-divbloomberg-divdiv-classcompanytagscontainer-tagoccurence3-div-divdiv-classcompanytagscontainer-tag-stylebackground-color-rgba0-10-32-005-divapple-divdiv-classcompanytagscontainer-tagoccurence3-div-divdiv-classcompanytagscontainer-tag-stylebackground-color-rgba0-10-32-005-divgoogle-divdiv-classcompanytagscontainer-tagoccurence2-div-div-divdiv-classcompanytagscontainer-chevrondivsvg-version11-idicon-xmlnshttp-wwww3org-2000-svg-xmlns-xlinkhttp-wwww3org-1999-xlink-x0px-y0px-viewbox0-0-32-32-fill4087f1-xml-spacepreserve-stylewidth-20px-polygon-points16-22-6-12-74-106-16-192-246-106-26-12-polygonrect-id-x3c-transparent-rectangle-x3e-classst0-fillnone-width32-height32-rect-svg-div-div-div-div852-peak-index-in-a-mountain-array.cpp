class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int mid = i + (j-i)/2;
            if(arr[mid]>arr[mid+1])j=mid;
            else i=mid+1;
             
        }
        return i;
    }
};