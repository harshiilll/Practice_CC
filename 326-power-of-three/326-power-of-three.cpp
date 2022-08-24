class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        if(n==1)
            return true;
        long long num=1;
        while(n>=num){
            
            if(num==n)
                return true;
            num=num*3;
        }
        return false;
    }
};