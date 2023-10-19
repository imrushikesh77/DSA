class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int i=0;
        int j=0;
        int ans = -1;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
                i++;
            }
            else if(nums[i]==0){
                if(k>0){
                    count++;
                    k--;
                    i++;
                }
                else{
                    while(k==0){
                        if(nums[j]==1){
                            count--;
                            j++;
                        }
                        else{
                            count--;
                            j++;
                            k++;
                        }
                    }
                    count++;
                    k--;
                    i++;
                }
            }
            ans=(max(ans,count));
        }
        return ans;
    }
};