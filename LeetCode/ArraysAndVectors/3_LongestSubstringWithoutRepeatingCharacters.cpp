class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
//         // if (!s.size()) return 0;
//         // s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
//         // if (!s.size()) return 0;
        
//         std::string subString = "";
//         std::vector<int> lengthOfString;
        
//         for (int i = 0; i < s.size(); i++){
//             std::cout << "i: " << s[i] << std::endl;
//             if (subString.find(s[i]) == std::string::npos) subString.push_back(s[i]);
//             else {
//                 lengthOfString.push_back(subString.size());
//                 std::cout << subString << std::endl;
//                 subString = "";
//                 i = s.find(s[i])+1;
//                 // subString.push_back(s[i]);
//             }
//         }
//         lengthOfString.push_back(subString.size());
//         std::cout << subString << std::endl;
        
//         int max = *max_element(lengthOfString.begin(), lengthOfString.end());
//         return max;
        
        
        //  Sliding Window Approach
        
        std::set<char> setChar;
        int left = 0, right = 0;
        int longest = 0;
        
        while (right < s.size()){
            if (setChar.find(s[right]) == setChar.end()){
                setChar.insert(s[right++]);
                longest = max(longest, int(setChar.size()));
            }
            else{
                setChar.erase(s[left++]);
            }
        }
        
        return longest;
    }
};
