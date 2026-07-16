class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
       int low = 0 ;
       int high = k-1 ;
       int sum = 0 ;
       int n =arr.size();
       for(int i = low ; i<=high ; i++){
           sum = sum + arr[i];
           
       }
       int res = sum ;
       while(high < n){
           res = max(res,sum);
           low ++ ;
           high ++ ;
           if(high == n) break ;
           sum = sum - arr[low-1];
           sum = sum + arr[high];
       }
       return res ;
    }
};