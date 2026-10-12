class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, digitSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];

            int n = nums[i];

            while (n > 0) {
                digitSum = digitSum + n % 10;
                n = n / 10;
            }
        }

        return abs(sum - digitSum);
    }
};