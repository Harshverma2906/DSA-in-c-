class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int off = 0 ;
        int cm = 1 ;
        int k = 1 ;
        while(cm<nums.size()){
            if(nums[cm] == nums[cm-1]){
                cm++;
                continue ;
                
            }
            else if (nums[cm] != nums[cm-1]){
                nums[off + 1 ] = nums [cm];
                cm++;
                off++;
                k++;
            }
        }
        return k ;
       for(int i = 0  ; i<nums.size() ; i++){
        return nums[i] ;
       }
        
    }
};