class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t count=0;
        while(n)
        {
            if(n%2) count++;
            n=n/2;
        }
        return count;
    }
};