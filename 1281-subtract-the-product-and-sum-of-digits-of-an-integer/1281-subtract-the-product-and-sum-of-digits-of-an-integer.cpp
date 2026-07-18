class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1 ;
        int sum = 0 ;
        int p ;
        while(n!=0){
            p= n%10 ;
            prod = prod * p ;
            sum = sum + p ;
            n=n/10 ;
        }
        return{prod-sum};
        
    }
};