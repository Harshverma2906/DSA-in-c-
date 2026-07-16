class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans; // 1. Create a 2D vector to store all triplets

        // 2. Crucial Step: Sort the vector first
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++){
            // Skip duplicate values for 'i' to avoid duplicate triplets
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            while(j < k){
                int s = nums[j] + nums[k];
                int sum = -nums[i];

                if(s == sum){
                    // 3. Store the found triplet into our answer vector
                    ans.push_back({nums[i], nums[j], nums[k]});

                    // Skip duplicates for 'j' and 'k'
                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;

                    // Move pointers inward
                    j++;
                    k--;
                }
                else if (s < sum){
                    j++; // Sum is too small, need a larger value
                }
                else {
                    k--; // Sum is too large, need a smaller value
                }
            }
        }
        
        // 4. Return the complete list of triplets at the very end
        return ans; 
    }
};