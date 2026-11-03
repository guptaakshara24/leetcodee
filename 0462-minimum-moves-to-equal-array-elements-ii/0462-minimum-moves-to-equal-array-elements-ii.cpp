class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int middle = nums.size() / 2;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            count = count + abs(nums[i] - nums[middle]);
        }

        return count;
    }
};