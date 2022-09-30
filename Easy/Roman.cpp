#include <iostream>

class RomanValue{
    public:
    int value;
    char symbol;
    RomanValue(){};
    RomanValue(int value, char symbol){
        this->value = value;
        this->symbol = symbol;
    }
    void copy(RomanValue copy)
    {
        this->symbol = copy.symbol;
        this->value = copy.value;
    }
    bool operator >(const RomanValue &r)
    {
        if(this->value > r.value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator <(const RomanValue &r)
    {
        if(this->value < r.value)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator ==(const RomanValue &r)
    {
        if(this->symbol == r.symbol)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// MCMXCIV

class Solution {
public:
    int romanToInt(std::string s) {
        // Setting Values
        RomanValue *obj = new RomanValue[7];
        obj[0] = RomanValue(1, 'I');
        obj[1] = RomanValue(5, 'V');
        obj[2] = RomanValue(10, 'X');
        obj[3] = RomanValue(50, 'L');
        obj[4] = RomanValue(100, 'C');
        obj[5] = RomanValue(500, 'D');
        obj[6] = RomanValue(1000, 'M');
        
        int length = s.length();
        RomanValue aux;
        RomanValue aux2;
        int result = 0;
        if(length > 1)
        {
            for(int i = 0; i < length - 1; i++)
            {
                for(int j = 0; j < 7; j++){
                    if(s[i] == obj[j].symbol)
                    {
                        aux.copy(obj[j]);
                    }
                    if(s[i + 1] == obj[j].symbol)
                    {
                        aux2.copy(obj[j]);
                    }
                }
                if(aux2 > aux)
                {
                    result = result + (aux2.value - aux.value);
                    i++;
                    if((i + 1) == (length - 1))
                    {
                        for(int j = 0; j < 7; j++){
                            if(s[length - 1] == obj[j].symbol)
                            {
                                aux.copy(obj[j]);
                            }
                        }
                        result = result + aux.value;
                    }
                }
                else
                {
                    result = result + aux.value;
                    if((i + 1) == (length - 1))
                    {
                        result = result + aux2.value;
                    }
                }
            }
        }
        else
        {
            for(int j = 0; j < 7; j++){
                if(s[0] == obj[j].symbol)
                {
                    aux.copy(obj[j]);
                }
            }
            result = aux.value;
        }
        delete[] obj;
        return result;
    }
};


int main()
{
    std::string input;
    std::cin >> input;
    Solution solution;
    int result = solution.romanToInt(input);
    std::cout << result << std::endl;
}