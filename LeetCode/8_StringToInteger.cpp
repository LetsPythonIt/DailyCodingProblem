class Solution {
public:
    int myAtoi(string str) {
        
        // remove spaces from the string
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        
        if (!str.size()) return 0;
        
        // Check if the sign is there and if it is negative or positive
        bool negative = false;
        long int output = 0;
        
        
        if (str[0] == '-') negative = true;
        else if (!(int(str[0]) - int('0') < 10)) return 0; // if not numeric return 0;
        else output = int(str[0]) - int('0');
        
        for (int i=1; i < str.size(); i++){
            if ((int(str[i]) - int('0') < 10)){ // Loop till there are numbers
                output = output*10 + (int(str[i]) - int('0'));
                
                if (!negative && (output >= 2147483648)) return INT_MAX;
                if (negative && (output >= 2147483648)) return INT_MIN;
            }
            else break;
        }
        
        if (negative) return -1*output;
        
        return output;
    }
};
