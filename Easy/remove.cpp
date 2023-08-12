#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int contadorVal = 0;
        for(int contador = 0; contador < nums.size(); contador++){
            if(nums[contador] != val)
            {
                if(nums[contador] != nums[contadorVal])
                {
                    nums[contadorVal] = nums[contador];
                    nums[contador] = val;
                }
                contadorVal++;
            }
        }
        return contadorVal;
    }
};