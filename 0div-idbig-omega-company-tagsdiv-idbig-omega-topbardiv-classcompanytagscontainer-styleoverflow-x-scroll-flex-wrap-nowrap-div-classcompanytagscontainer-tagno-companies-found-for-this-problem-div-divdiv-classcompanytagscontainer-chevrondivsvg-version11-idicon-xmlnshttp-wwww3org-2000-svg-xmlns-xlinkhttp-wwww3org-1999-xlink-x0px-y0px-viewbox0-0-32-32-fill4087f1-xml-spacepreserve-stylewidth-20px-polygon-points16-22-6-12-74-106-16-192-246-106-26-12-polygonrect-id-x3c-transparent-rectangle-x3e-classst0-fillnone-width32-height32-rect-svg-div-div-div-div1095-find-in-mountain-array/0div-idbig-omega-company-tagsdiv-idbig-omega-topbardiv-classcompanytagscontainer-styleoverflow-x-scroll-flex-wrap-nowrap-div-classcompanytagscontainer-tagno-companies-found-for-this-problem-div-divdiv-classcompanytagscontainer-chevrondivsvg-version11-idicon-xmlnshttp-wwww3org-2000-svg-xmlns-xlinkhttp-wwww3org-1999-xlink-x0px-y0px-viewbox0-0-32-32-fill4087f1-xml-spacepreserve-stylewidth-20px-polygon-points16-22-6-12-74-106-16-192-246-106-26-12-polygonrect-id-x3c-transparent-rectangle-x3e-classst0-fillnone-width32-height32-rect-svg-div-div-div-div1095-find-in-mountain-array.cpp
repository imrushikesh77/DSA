/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int i=0;
        int j=mountainArr.length()-1;
        int ans = -1;
        while(i<j){
            int mid = i + (j-i)/2;
            if(mountainArr.get(mid)>mountainArr.get(mid+1))j=mid;
            else i=mid+1;
             
        }
        i=0;
        int k=j;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(mountainArr.get(mid)<target)i=mid+1;
            else if(mountainArr.get(mid)>target)j=mid-1;
            else{
                ans=mid;
                break;
            }
        }
        if(ans<0){
            j=mountainArr.length()-1;
            while(k<=j){
                int mid = k +(j-k)/2;
                if(mountainArr.get(mid)>target)k=mid+1;
                else if(mountainArr.get(mid)<target)j=mid-1;
                else {
                    ans=mid;
                    break;
                }
            }
        }
        return ans;
    }
};