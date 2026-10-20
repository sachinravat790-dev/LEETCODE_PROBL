class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>result;   // empty vector create kiye ha
        string previous ="";      // previous string to empty hoga 


        for(int i=0; i<words.size(); i++)
        {
            string curr=words[i];

            // words ko sort kar diye ha 
            sort(curr.begin(), curr.end());
        

        if(curr!=previous)
        {
            result.push_back(words[i]);
            previous=curr;
        }
    }
    return result;
    }
};