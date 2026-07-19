class Solution {
public:
    int countDigits(int a, int b) {
        // Use long long to prevent integer overflow for values up to 10^16
        long long n = (long long)a * b; 
        
        // Edge case: If the product is 0, it has 1 digit
        if (n == 0) return 1;
        
        // Convert negative products to positive
        if (n < 0) {
            n = -n;
        }
        
        int count = 0 ;
        while(n!=0){
            count ++ ;
            n=n/10 ;
        }
        return count ;
    }
};