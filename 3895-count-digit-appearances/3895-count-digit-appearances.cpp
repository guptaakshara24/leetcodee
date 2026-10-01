class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int num = nums[i];

            while (num > 0) {
                int last = num % 10;

                if (last == digit) {
                    count++;
                }

                num = num / 10;
            }
        }

        return count;
    }
};