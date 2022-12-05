class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0;
        int p=1;
        int r;
        while(n)
            r = n%10,n/=10,s+=r,p*=r;
        return p-s;
    }
};