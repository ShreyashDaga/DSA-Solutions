class Solution {
public:
    bool possible(vector<int>& nums, int k, int maxSum) {
        int partitions = 1;
        long long currSum = 0;

        for (int num : nums) {
            if (currSum + num <= maxSum) {
                currSum += num;
            } else {
                partitions++;
                currSum = num;
            }
        }

        return partitions <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());

        int high = accumulate(nums.begin(),
                              nums.end(), 0);

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(nums, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};