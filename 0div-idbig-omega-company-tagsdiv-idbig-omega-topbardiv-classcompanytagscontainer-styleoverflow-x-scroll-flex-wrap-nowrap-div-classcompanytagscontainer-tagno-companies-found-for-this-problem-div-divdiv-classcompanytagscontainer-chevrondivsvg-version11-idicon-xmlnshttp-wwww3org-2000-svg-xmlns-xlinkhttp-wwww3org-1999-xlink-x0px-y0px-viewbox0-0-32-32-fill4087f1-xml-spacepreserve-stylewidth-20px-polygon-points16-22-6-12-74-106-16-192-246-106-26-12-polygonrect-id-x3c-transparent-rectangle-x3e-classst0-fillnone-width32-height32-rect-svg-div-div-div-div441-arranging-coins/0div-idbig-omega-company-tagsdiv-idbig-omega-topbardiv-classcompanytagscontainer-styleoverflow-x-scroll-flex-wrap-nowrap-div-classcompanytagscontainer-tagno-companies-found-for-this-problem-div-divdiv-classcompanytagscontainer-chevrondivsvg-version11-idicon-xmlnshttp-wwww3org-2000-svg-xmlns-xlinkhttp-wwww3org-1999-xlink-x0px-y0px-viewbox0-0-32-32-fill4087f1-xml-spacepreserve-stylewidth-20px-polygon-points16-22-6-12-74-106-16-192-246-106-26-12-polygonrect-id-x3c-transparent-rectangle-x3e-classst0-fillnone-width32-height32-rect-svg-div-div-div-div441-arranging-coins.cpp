class Solution {
public:
    int arrangeCoins(int n) {
        int start = 0;
        int end = n;
        int ans = 0;
        while(start<=end){
            long long mid = (start+end)/2;
            long long sum = mid*(mid+1)/2;
            if(sum>n)end = mid-1;
            else if(sum<n){
                ans = mid;
                start = mid +1;
            }
            else return mid;
        }
        return ans;
    }
};