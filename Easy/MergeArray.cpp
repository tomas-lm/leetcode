using namespace std;
#include <vector>
#include <iostream>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> aux(m + n, 0);
        int contadorM = 0;
        int contadorN = 0;
        for(int contador = 0; contador < n + m; contador++)
        {
            if(nums1[contadorM] < nums2[contadorN] && contadorM < m && contadorN < n)
            {
                aux[contador] = nums1[contadorM];
                contadorM++;
            }
            else
            {
                aux[contador] = nums2[contadorN];
                contadorN++;
            }
        }
        nums1 = aux;
        for(int i = 0; i < n + m; i++){
            cout << nums1[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);

    vector<int> nums2;
    nums2.push_back(2);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(6);
    int m = 2;
    int n = 4;
    Solution solution;
    solution.merge(nums1, m, nums2, n);

}