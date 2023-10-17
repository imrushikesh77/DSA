class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0;
        int j=letters.size()-1;
        if(target>letters[j])return letters[i];
        while(i<=j){
            int mid = i + (j-i)/2;
            if(letters[mid]<=target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return letters[i%letters.size()];
    }
};