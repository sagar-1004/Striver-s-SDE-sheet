class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int one=0,two=0,zero=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                one++;
            }
            if(nums[i]==2)
            {
                two++;
            }
            if(nums[i]==0)
            {
                zero++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(zero>0)
            {
                nums[i]=0;
                zero--;
            }
            else if(one>0)
            {
                nums[i]=1;
                one--;
            }
            else
            {
                nums[i]=2;
                two--;
            }
         
        }
        
        
        
    }
};