class Solution {
public:
    void reverseString(vector<char>& str) {

        
        int left=0;
        int right=str.size()-1;

        while(left<right)
        {
            swap(str[left],str[right]);
            left++;
            right--;
        }
       
    }
};