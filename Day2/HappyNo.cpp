class Solution {
    public:
        int sumofsquares(int n){
            int sum=0;
            while(n>0){
                int digit=n%10;
                sum=sum+digit*digit;
                n=n/10;
            }
            return sum;
        }
        bool isHappy(int n) {
            int slow=n;
            int fast=sumofsquares(n);
            while(fast!=1 && slow!=fast){
                slow=sumofsquares(slow);
                fast=sumofsquares(sumofsquares(fast));
            }
            return fast==1;
        }
    };