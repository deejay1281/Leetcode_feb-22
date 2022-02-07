class Solution {
public:
int removeDuplicates(vector<int>& nums) {
	int n=nums.size();
	int idx=0;
	for(int i=1;i<n;i++){
			if(idx<1 or nums[idx]!=nums[i] or nums[idx-1]!=nums[i])                   nums[++idx]=nums[i];
	}
	return idx+1;
}
};