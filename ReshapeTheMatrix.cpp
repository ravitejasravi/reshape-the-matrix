class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
     
        if(mat.size() * mat[0].size() != r * c )
            return mat;
        
        vector<vector <int>> FinalMatrix(r);
        int row = 0, col = 0;
        
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[i].size(); j++)
            {
                FinalMatrix[row].push_back(mat[i][j]);
                col += 1;
            
                if(col == c)
                {
                    row += 1;
                    col = 0;
                }
            }
        }
        
        return FinalMatrix;
    }
};