class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        set<int> row;
        set<int> col;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);   
                }
            }
        }
        for (auto it = row.begin(); it !=
                               row.end(); ++it)
        {
            int x = *it;
            for(int q=0;q<matrix[x].size();q++)
            {
                matrix[x][q]=0;
            }
        }
        
        for (auto it = col.begin(); it !=
                               col.end(); ++it)
        {
            int x = *it;
            for(int q=0;q<matrix.size();q++)
            {
                matrix[q][x]=0;
            }
        }
        
        
        
        
        
        
        
        
        
        
    }
};