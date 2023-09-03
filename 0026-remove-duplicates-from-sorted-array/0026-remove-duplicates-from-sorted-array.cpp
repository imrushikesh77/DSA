class Solution {
public:
    int removeDuplicates(vector<int>& num) {
        int i = 0;
	for(int j=1;j<num.size();j++){
		if(num[i]!=num[j]){
			num[i+1] = num[j];
			i++;
		}
	}
	return i+1;
    }
};