class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        int front = 0;
        int end = n-1;

        while(front<end){
            for(int i=0;i<n;i++){
                swap(matrix[i][front],matrix[i][end]);
            }
            front++;
            end--;
        }
    }
};