class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int i=0,j=0,k=0;
        while(k<arr.size()){
        for(i=0;i<pieces.size();i++)
        {
            if(pieces[i][0]==arr[k])
            {
                k++;
                for(j=1;j<pieces[i].size();j++)
                {
                    if(pieces[i][j]==arr[k])
                    {
                        k++;
                    }
                    
                }
                break;
            }
            
        }
            if(i==pieces.size())
                break;
        }
        if(k==arr.size())
        return true;
        else
        return false;
    }
};