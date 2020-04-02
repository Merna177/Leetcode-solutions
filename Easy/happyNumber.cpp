class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow= sumsquare(slow);
            fast = sumsquare(sumsquare(fast));
        }while(slow!=fast);
        if(slow==1)
            return true;
        else 
            return false;
        
    }
public:
    int sumsquare(int n){
        int sum=0;
        while(n){
            sum += (n % 10) * (n % 10); 
            n /= 10; 
        }
        return sum;
    }
};
