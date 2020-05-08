class Solution {
public:
    vector<string> allParenthesis;

    vector<string> generateParenthesis(int n) {
        
        backTrack("", 0, 0, n); // Recursively build the vector
        return allParenthesis;
    }
    
    void backTrack(string currentString, int openUsed, int closedUsed, int max){
        
        // Base case
        if (currentString.size() == max*2){
            allParenthesis.push_back(currentString);
            return;
        }
        
        // Conditional Cases
        if (openUsed < max){
            auto NewcurrentString = currentString + "(";
            backTrack(NewcurrentString, openUsed+1, closedUsed, max);
        }
        if (closedUsed < openUsed){
            auto NewcurrentString = currentString + ")";
            backTrack(NewcurrentString, openUsed, closedUsed+1, max);
        }
        
    }
};
