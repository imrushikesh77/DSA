class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int countT = 0;
        int countF = 0;
        int i=0;
        int j=0;
        int ans = 0;
        while(i<answerKey.length()){
            if(answerKey[i]=='F')countF++;
            else countT++;
            while(min(countT,countF)>k){
                if(answerKey[j]=='F')countF--;
                else countT--;
                j++;
            }
            ans = max(ans,countT+countF);
            i++;
        }
        return ans;
    }
};