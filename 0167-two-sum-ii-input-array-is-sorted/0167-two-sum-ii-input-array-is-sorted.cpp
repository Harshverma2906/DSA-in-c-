class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0 ;
        int j = numbers.size() - 1  ;
        
    while(i<j){
        int currentsum = numbers[i] + numbers[j];
        if(currentsum < target ){
            i++;
        }
        else if(currentsum > target ){
            j--;
        }
        else{
       return {i+1 , j+1};
        }
    }
    return {} ;
    
    }
        
    
};
