class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = 100000;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int sum = 0;

            while (n > 0) {
                sum = sum + n % 10;
                n = n / 10;
            }

            if (sum < ans) {
                ans = sum;
            }
        }

        return ans;
    }
};