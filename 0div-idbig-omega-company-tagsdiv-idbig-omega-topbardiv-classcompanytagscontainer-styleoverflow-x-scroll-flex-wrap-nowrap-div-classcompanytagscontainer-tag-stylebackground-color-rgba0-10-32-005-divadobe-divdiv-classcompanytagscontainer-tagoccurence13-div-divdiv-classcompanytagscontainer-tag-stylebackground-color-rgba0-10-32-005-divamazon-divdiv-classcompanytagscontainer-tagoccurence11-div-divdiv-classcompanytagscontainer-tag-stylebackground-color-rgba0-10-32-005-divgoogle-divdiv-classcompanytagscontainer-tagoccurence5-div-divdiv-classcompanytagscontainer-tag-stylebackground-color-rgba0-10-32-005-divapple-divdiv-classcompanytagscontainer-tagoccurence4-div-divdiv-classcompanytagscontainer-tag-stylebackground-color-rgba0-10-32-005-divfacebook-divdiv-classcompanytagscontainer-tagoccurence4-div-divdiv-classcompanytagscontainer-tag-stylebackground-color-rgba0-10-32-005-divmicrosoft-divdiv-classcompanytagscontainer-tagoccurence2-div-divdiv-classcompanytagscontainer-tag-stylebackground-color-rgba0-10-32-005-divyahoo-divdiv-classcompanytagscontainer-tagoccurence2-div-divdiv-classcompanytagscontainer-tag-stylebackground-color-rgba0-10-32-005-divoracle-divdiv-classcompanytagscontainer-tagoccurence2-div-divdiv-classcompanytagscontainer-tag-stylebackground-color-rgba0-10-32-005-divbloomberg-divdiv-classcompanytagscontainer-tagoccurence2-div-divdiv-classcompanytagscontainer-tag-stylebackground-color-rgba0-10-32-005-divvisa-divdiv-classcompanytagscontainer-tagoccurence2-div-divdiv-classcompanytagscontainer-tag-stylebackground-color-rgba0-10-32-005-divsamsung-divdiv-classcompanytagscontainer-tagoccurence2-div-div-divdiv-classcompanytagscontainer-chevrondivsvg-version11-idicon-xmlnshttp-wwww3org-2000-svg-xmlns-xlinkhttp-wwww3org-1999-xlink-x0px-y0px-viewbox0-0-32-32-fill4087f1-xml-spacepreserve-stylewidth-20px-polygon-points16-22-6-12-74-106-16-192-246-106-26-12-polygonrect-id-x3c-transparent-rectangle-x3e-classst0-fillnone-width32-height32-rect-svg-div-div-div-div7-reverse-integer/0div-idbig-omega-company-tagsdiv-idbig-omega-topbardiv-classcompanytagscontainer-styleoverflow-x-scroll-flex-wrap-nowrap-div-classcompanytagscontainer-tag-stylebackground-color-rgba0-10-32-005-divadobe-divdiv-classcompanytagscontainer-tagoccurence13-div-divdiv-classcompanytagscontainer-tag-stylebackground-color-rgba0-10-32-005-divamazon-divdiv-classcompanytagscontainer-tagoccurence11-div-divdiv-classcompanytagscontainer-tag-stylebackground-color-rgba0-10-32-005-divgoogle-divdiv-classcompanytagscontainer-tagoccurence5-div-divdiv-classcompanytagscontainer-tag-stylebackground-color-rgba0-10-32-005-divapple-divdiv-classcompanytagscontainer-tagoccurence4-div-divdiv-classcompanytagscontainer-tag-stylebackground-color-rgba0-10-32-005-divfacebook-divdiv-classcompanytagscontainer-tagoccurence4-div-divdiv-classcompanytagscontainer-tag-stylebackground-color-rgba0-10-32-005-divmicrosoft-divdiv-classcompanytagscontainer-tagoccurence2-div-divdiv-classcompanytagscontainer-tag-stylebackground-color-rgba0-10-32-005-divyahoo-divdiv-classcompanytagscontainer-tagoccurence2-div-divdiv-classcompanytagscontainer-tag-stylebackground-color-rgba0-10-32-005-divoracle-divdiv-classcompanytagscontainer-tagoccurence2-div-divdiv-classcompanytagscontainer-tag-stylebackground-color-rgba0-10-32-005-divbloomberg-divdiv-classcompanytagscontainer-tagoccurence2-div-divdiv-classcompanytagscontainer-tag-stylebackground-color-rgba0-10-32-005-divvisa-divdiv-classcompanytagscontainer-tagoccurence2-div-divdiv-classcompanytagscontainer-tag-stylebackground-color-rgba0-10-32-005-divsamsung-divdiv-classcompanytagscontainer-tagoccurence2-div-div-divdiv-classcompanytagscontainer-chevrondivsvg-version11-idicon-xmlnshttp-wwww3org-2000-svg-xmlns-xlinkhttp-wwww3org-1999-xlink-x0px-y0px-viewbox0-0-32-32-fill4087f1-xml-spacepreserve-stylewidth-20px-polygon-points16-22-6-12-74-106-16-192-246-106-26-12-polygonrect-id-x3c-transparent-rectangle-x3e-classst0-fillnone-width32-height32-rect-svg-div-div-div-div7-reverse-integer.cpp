class Solution {
public:
    int reverse(int x) {
        int s =0;
        while(x!=0){
            int mod = x%10;
            if(s>INT_MAX/10 || s<INT_MIN/10)return 0;
            s = s*10 +mod;
            x/=10;
        }
        cout<<s;
        return s;
    }
};