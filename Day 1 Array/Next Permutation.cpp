class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s=0;
        s=next_permutation(nums.begin(),nums.end());
            if(s==1)
            {
                return;  
            }
            
            else
            {
                sort(nums.begin(),nums.end());
                
            }
            
        
        
    }
};