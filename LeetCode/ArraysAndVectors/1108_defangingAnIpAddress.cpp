class Solution {
public:
    string defangIPaddr(string address) {
        
        string newStr{""}; // empty string initialization
        
        for (int i{0}; i < address.size(); i++){
            if (address.at(i) == '.')
                newStr = newStr + "[.]";
            else
                newStr = newStr + address.at(i);
        }
        
        return newStr;
    }
};
