class Solution {
public:
    bool isPalindrome(int x) {
        // special cases:
        //as negative numbers are not palindrome (x<0)
        //if last digit is 0
        //if x != 0
        if(x<0 || (x%10 == 0 && x!=0) ){
            return false; 
        }
        int rNo = 0;
        while(x > rNo){
            rNo = (rNo*10) + (x%10);
            x/=10;
        }
        //when length is an odd number, we can get rid of the middle digit; Since middle digit is doesn't matter in palindrome
        return x == rNo || x == rNo/10;
    }
};