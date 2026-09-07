class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagramGroups;

        for(string word : strs)
        {
            string sortedWord = word;
            sort(sortedWord.begin(),sortedWord.end());
            anagramGroups[sortedWord].push_back(word);
        }
        vector<vector<string>> results;

        for(auto const &pair: anagramGroups)
        {
            results.push_back(pair.second);
        }

        return results;
        
    }
};
