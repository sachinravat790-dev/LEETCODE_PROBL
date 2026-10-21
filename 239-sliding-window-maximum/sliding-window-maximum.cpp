class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int>dq;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++)
        {
            // window se bahar bala element remove karo
            while(!dq.empty() && dq.front()<=i-k)
            {
                dq.pop_front();
            }

            // remove smaller element from back
            while(!dq.empty() && nums[dq.back()]<=nums[i])
            {
                dq.pop_back();
            }

            // store current index
            dq.push_back(i);

            // print maximum element when window is complete
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
       return ans;
    }
};