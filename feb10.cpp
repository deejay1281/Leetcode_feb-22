THIS APPROCH CONSIST OF PRE-REQUISETS LIKE PREFIX SUM AND HASH-MAP

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int curr_sum = 0;
        int i = 0;
        int count = 0;
        
        while(i < n){
            curr_sum += nums[i];
            if(curr_sum == k) count++;
            if(mp.find(curr_sum - k) != mp.end()) 
                count += mp[curr_sum - k];
            mp[curr_sum] += 1;
            i++;
        }
        return count;
    }
};