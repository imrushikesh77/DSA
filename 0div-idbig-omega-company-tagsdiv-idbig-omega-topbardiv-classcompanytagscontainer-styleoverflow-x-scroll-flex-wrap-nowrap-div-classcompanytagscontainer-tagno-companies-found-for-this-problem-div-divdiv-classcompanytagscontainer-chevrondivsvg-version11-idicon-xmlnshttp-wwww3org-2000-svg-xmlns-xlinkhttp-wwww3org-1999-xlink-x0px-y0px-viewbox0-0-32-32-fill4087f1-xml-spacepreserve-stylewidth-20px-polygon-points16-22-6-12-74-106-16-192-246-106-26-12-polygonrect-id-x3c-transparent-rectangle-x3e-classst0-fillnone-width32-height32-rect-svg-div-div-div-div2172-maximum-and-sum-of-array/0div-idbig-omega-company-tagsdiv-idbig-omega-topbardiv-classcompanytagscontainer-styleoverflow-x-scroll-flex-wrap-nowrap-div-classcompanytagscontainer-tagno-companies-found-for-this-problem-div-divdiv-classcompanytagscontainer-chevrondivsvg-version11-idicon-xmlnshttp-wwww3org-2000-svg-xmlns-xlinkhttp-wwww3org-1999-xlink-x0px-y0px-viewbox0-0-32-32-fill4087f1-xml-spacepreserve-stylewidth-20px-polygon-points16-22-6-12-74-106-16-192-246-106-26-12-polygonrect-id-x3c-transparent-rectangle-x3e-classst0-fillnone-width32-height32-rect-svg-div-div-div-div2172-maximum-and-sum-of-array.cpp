class Solution {
public:
    int mx;
    map<tuple<int,int,int> , int>dp;
    int fun(int i,int mask1,int mask2,vector<int>&nums)
    {
        if(i>=nums.size())return 0;
        int ans=0;
        tuple<int,int,int>temp{i,mask1,mask2};
        if(dp.find(temp)!=dp.end())return dp[temp];
        for(int k=1;(1<<k)<=mx;k++)
        {
            // cout<<k<<" ";
              if((mask1&(1<<k))==0)
              {
                  int nw=(mask1|(1<<k));
                 ans=max(ans,(nums[i]&k)+fun(i+1, nw,mask2,nums) );
              }
            else
                if((mask2&(1<<k))==0)
                {
                     int nw=(mask2|(1<<k));
                    ans=max(ans,(nums[i]&k)+fun(i+1, mask1,nw,nums) );
                }
        }
        return dp[temp]=ans;
    }
    int maximumANDSum(vector<int>& nums, int numSlots) {
        mx=(1<<numSlots);
        // memset(dp,-1,sizeof(dp));
        int ans=fun(0,0,0,nums);
        return ans;
        
    }
};