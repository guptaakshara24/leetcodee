class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int minimum = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];

            if(nums[i] < minimum) {
                minimum = nums[i];
            }
        }

        return sum - (nums.size() * minimum);
    }
};