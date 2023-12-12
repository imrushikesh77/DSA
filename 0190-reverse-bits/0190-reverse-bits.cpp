class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int cnt=31;
        uint32_t sum = 0;
        while(n>0){
            if(n&1!=0)sum+=pow(2,cnt);
            cnt--;
            n>>=1;
        }
        return sum;
    }
};