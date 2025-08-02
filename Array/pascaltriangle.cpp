class Solution {
public:
    vector<int> generaterow(int rowIndex) {
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);  

        for (int i = 1; i <= rowIndex; i++) {
            ans = ans * (rowIndex - i + 1);
            ans = ans / i;
            ansrow.push_back(ans);  
        }

        return ansrow;
    }
//function 
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};
