class Solution {
public:
    int reverse(int n) {
       
        int rn = 0 ;
        int on = n ;
        int rem ;
        
        while(n!=0){
            rem = n%10 ;

            if(rn > INT_MAX /10 || rn < INT_MIN/10){
            return 0 ;
            }

            rn = (rn * 10 ) + rem ;
            n = n/10 ;

        }
        return rn ;
        
    }   
    
    };