class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        
        // 1. Separate and square elements
        for (int x : nums) {
            if (x >= 0) {
                pos.push_back(x * x);
            } else {
                neg.push_back(x * x);
            }
        }
        
        // 2. Fix the reversed order of squared negative numbers
        reverse(neg.begin(), neg.end());
        
        // 3. Allocate full size to result vector to prevent crash
        vector<int> result(nums.size());
        
        int p = 0; // Pointer for pos
        int n = 0; // Pointer for neg
        int id = 0; // Pointer for result
        
        int l = pos.size();
        int m = neg.size();
        
        // 4. Merge the two sorted vectors together
        while (p < l && n < m) {
            if (pos[p] < neg[n]) {
                result[id++] = pos[p++];
            } else {
                result[id++] = neg[n++];
            }
        }
        
        // Remaining elements cleanup
        while (p < l) {
            result[id++] = pos[p++];
        }
        while (n < m) {
            result[id++] = neg[n++];
        }
        
        return result;
    }
};