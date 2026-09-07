class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_w = "";
        for(string s : strs)
        {
            encoded_w += to_string(s.length()) + '#' + s;
        }
        return encoded_w;
    }

    vector<string> decode(string s) {
        vector<string> decoded_w;
        int i = 0;
        
        while(i<s.length())
        {
            int j = i;
            while(s[j] != '#')
            {
                j++;
            }

            int length = stoi(s.substr(i, j - i));

            string word = s.substr(j+1,length);
            decoded_w.push_back(word);

            i = j + 1 + length;
        }
        return decoded_w;
    }
};
