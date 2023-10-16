class Solution {
public:
    int mySqrt(int x) {
        int i=0;
        int j=(x/2) + 1;
        int ans = 0;
        while(i<=j){
            long long mid = (i+j)/2;
            if(mid*mid==x)return mid;
            else if(mid*mid<x){
                ans = mid;
                i=mid+1;
                
            }
            else if(mid*mid>x){
                j=mid-1;
                
            }
        }
        return ans;
    }
};