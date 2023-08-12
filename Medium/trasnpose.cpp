#include <cmath>

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int i = 0;
        int j = 0;
        int walker = 0;
        int anterior = 0;
        int atual = matrix[0][0];
        int var = 0;
        // (n - 1) - abs((n - 1) - (i + n - 1))
        for(int k = 0; k < (n * n); k++){
            if((k % 4) == 0 && k != 0){
                cout << "entrei no if" << endl;
                walker++;
                if(walker % (n - 1 - var) == 0){
                    var += 2;
                    i++;
                }
                else{
                    j++;
                }
                atual = matrix[i][j];
                cout << "j: " << j << " i:" << i << " walker: " << walker << endl;
            }
            anterior = atual;
            atual = matrix[j][(n - 1) - i];
            matrix[j][(n - 1) - i] = anterior;
            int auxi = i;
            i = j;
            j = (n - 1) - auxi;
            for(int aux = 0; aux < n; aux++){
                for(int aux2 = 0; aux2 < n; aux2++){
                    cout << matrix[aux][aux2] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
};