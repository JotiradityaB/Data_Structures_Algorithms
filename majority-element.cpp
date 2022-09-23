//https://leetcode.com/problems/majority-element


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s=nums.size()/2;
        sort(nums.begin(),nums.end());
        return nums[s];
    }
};
