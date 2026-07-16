class Solution {
public:
    bool isPalindrome(int n) {

       
    int rn = 0 ;
    int on = n ;
    bool flag = 0 ;
    int rem ;
    if(n<0){
        return false ;
    }

    while(n!=0){
        rem = n%10 ;
        if(rn > INT_MAX /10 || rn < INT_MIN/10){
            return 0 ;
        }
        rn = (rn * 10 ) + rem ;
        n = n/10 ;


    }
    
    if(rn==on){
       return true ;
    }
    else 
    return false ;

    

        
    }
};