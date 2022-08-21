class Solution {
public:
    bool isPalindrome(int x) {
        long int a = x;
        long int b = 0;
        if(x<0){
            a = (long int)x*(-1);
        }
        while(a){
            b *=10;
            b += (a%10);
            a/=10;
        }
        return (x==b);
    }
};