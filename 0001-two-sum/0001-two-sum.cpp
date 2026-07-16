class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        
        int n  = nums.size () ;
        unordered_map<int , int > mpp ;
        for(int i = 0  ; i< n ; i++){
           
            int currentnum = nums[i];
            int partnerneeded = target - currentnum ;
            if(mpp.find(partnerneeded) != mpp.end()){
                return{mpp[partnerneeded] , i};//this will return the index as it is like mpp[number] = index in hasmap 

            }
            mpp[currentnum ] = i ;
        }
         return {} ;
    }
    
};