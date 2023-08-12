#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> aset;
        for(auto i : nums){
            aset.insert(i);
        }
        vector<int> aux;
        int counter = 0;
        for(auto i: aset){
            aux.push_back(i);
            counter++;
        }
        while(counter < nums.size()){
            aux.push_back(-1);
            counter++;
        }
        return aux.size();

    }
};


// [1, 2, 2, 3, 5, 6]