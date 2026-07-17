class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        for (int i=0; i<nums.size(); i++) {
            dict[nums[i]]=i;
        }
        for (int i=0; i<nums.size(); i++) {
            int comp=target-nums[i];
            if (dict.count(comp) && dict[comp]!=i) return {i, dict[comp]};
        }
        return {};
    }   
};