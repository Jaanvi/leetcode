class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        int size1 = words1.size();
        int size2 = words2.size();
        vector<string> ans;
        map<char, int> m2;
        for (int i = 0; i < size2; i++) 
        {
            string temp2 = words2[i];
            map<char, int> tempMap;
            for (char c : temp2) 
            {
                tempMap[c]++;
            }
            for (auto& it : tempMap) 
            {
                m2[it.first] = max(m2[it.first], it.second);
            }
        }

        for (int i = 0; i < size1; i++) 
        {
            string temp = words1[i];
            bool uni = true;
            map<char, int> m1;
            for (char c : temp) 
            {
                m1[c]++;
            }

            for (auto it = m2.begin(); it != m2.end(); it++) 
            {
                if (m1[it->first] < it->second) {
                    uni = false;
                    break;
                }
            }

            if (uni) 
            {
                ans.push_back(words1[i]);
            }
        }
        return ans;
    }
};
