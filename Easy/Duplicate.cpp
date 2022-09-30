#include <vector>
#include <iostream>
#include <set>


class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::set<int> set;
        for(auto i: nums)
        {
            if(set.find(i) == set.end()){
                set.insert(i);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};

int main(){
    std::vector<int> array;
    array.push_back(100);
    for(int i = 0; i < 50; i++)
    {
        array.push_back(i);
    }
    Solution solution;
    std::cout << solution.containsDuplicate(array) << std::endl;
    
}