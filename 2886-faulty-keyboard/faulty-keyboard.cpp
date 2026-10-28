class Solution {
public:
    string finalString(string s) {
       string ans ="";

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='i')
            {
                ans.push_back(s[i]);
            }
            else {
                int left = 0;
                int right = ans.size() - 1;

                while (left < right) {
                    char temp = ans[left];
                    ans[left] = ans[right];
                    ans[right] = temp;

                    left++;
                    right--;
                }
            }
        }
        return ans;
    }
};