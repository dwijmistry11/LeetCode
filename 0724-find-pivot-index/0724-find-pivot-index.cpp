class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sl=0,sr=0,i,j;
        
        for(i=0; i<nums.size(); i++)
        {
            // printf("sl: %d %d\n",i,sl);
            sr=0;
            for(j=nums.size()-1; j>i;j--)
            {
                sr+=nums[j];
                // printf("sr: %d %d\n",j,sr);
                if(sl==sr && ( j==i || j==(i+1)))
                {
                    return i;
                }  
                // if(sr>sl)
                // {
                //     break;
                // }   
            }
            if(sl==sr && ( j==i || j==(i+1)))
            {
                return i;
            }
            sl+=nums[i];
        }
        return -1;
    }
};