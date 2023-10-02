class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.length()<3)return false;
        int cntA = 0;
        int cntB = 0;
        for(int i=0;i<colors.length()-2;i++){
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A')cntA++;
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B')cntB++;
        }
        cout<<cntA<<" "<<cntB;
        if(cntA>cntB)return true;
        return false;
    }
};