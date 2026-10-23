#include <vector>
#include <string>

class Solution {
public:
    // Encodes a list of strings to a single string.
    std::string encode(std::vector<std::string>& strs) {
        std::string encoded = "";
        for (const std::string& s : strs) {
            // Correctly turn the length into a string (e.g., "5" + "#" + "hello")
            encoded += std::to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    // Decodes a single string to a list of strings.
    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> ans;
        int i = 0;
        
        while (i < s.size()) {
            // Find the position of the next delimiter '#' starting from index i
            int j = s.find('#', i);
            
            // Extract the length substring between i and j, then convert it to an integer
            int len = std::stoi(s.substr(i, j - i));
            
            // The string itself starts right after '#' (j + 1) and runs for 'len' characters
            ans.push_back(s.substr(j + 1, len));
            
            // Move our pointer forward past the processed string
            i = j + 1 + len;
        }
        
        return ans;
    }
};
