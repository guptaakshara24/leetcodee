class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int maximum = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];

            if(nums[i] > maximum) {
                maximum = nums[i];
            }
        }

        return (nums.size() * maximum) - sum;
    }
};