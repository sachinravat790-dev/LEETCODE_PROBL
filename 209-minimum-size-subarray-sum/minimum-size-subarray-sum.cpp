class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int end=0;
        int ans=INT_MAX;
        int sum=0;

        for(start=0; start<nums.size(); start++)
        {
            // add start element
            sum= sum+nums[start];

        while(sum>=target)
        {
            // find length of window
            ans=min(ans, start-end+1);
        
    
            //remove element 
            sum-=nums[end];
            end++;
        }
        }
        if(ans==INT_MAX){
        return 0;
        }
        return ans;
    }
};