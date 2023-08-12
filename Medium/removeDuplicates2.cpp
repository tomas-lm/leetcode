#include <vector>

using namespace std;

// [1][1][1][2][2][3]

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lookingAt = 0;
        bool rept = false;
        int maxSize = nums.size();
        vector<int> aux;
        if(nums.size() == 1)
        {
            aux.push_back(nums[0]);
            return 1;
        }
        for(int i = 0; i < nums.size() - 1; i++){
            lookingAt = nums[i];
            if(nums[i + 1] != lookingAt && rept == true){
                rept = false;
            }
            else if(nums[i + 1] != lookingAt && rept == false){
                aux.push_back(nums[i]);
            }
            else if(nums[i + 1] == lookingAt && rept == false){
                rept = true;
                aux.push_back(nums[i]);
                aux.push_back(nums[i + 1]);
            }
            else if(nums[i + 1] == lookingAt && rept == true){
                // reduce space swipe last
                maxSize--;
            }
            if(i == nums.size() - 2 && rept == false){
                aux.push_back(nums[i + 1]);
            }
        }
        nums = aux;
        return maxSize;
    } 
};