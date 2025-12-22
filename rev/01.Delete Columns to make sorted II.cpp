class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int rows=strs.size();
        int cols=strs[0].size();

        int del=0;
        vector<bool>as(rows,false);

        for(int col=0;col<cols;col++)
        {
            bool dele=false;
           for(int row=0;row<rows-1;row++)
           {

            if(!as[row]&&strs[row][col]>strs[row+1][col])
            {
                    del++;
                    dele=true;
                    break;
            }
              
           }

           if(dele)
           {
               continue;
           }

           for(int i=0;i<rows-1;i++)
           {
                 as[i]=as[i]|strs[i][col]<strs[i+1][col];
           }

        }

        return del;



        

        
    }
};
