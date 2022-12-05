class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0,p=1,r;
        while(n) r = n%10,n/=10,s+=r,p*=r;
        return p-s;
    }
};