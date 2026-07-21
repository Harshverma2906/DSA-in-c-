class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        // 1. Sort the array so two-pointer logic works predictably
        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX; // Tracks smallest absolute difference
        int resultSum = 0;    // Stores the sum corresponding to minDiff

        // 2. Fix the first element 'i'
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            // 3. Two-pointer search for the remaining pair
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                int diff = abs(currentSum - target);

                // If current triplet is closer to target, update minDiff & resultSum
                if (diff < minDiff) {
                    minDiff = diff;
                    resultSum = currentSum;
                }

                // Adjust pointers based on comparison with target
                if (currentSum == target) {
                    // Exact match found (difference = 0), return target immediately
                    return currentSum;
                } 
                else if (currentSum < target) {
                    left++;  // Need a larger sum
                } 
                else {
                    right--; // Need a smaller sum
                }
            }
        }

        return resultSum;
    }
};