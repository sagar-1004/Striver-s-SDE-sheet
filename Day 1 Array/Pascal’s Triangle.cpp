class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > vec(numRows);
        
        if(numRows==1)
        { 
            vec[0].push_back(1);
            
            return vec;
        }
        else if(numRows==2)
        {
            vec[0].push_back(1);
            vec[1].push_back(1);
            vec[1].push_back(1);
            return vec;
        }
        else
        {
           vec[0].push_back(1);
            vec[1].push_back(1);
            vec[1].push_back(1);
            
            for(int i=2;i<numRows;i++)
            {
                vec[i].push_back(1);
                
                for(int j=1;j<i;j++)
                {
                    int l=vec[i-1][j]+vec[i-1][j-1];
                    vec[i].push_back(l);
                    
                }
                vec[i].push_back(1);
            }
            return vec;
        }
        
        
    }
};