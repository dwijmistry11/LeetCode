class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        int temp;
        while(n)
        {
            temp = n%10;
            n/=10;
            sum+=temp;
            pro*=temp;
        }
        return pro-sum;
    }
};