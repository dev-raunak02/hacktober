// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int startrow=0;
    int endrow=r-1;
    int startcol=0;
    int endcol=c-1;
    
    int i,j;
    
    vector<int> list1;
    
    while(startrow<=endrow && startcol<=endcol)
    {
        
        // Print start row
        for(j=startcol;j<=endcol;j++)
        {
            int ans = matrix[startrow][j];
            list1.push_back(ans);
        }
        startrow++;
        
        //Print end col
        
        for(i=startrow;i<=endrow;i++)
        {
            int ans = matrix[i][endcol];
            list1.push_back(ans);
        }
        endcol--;
        
        //Print Endrow
        if(endrow>=startrow)
        {
            for(j=endcol;j>=startcol;j--)
            {
                int ans = matrix[endrow][j];
                list1.push_back(ans);
            }
            endrow--;
        }
        
        
        // print startcol
        if(endcol>=startcol)
        {
            for(i=endrow;i>=startrow;i--)
            {
                int ans = matrix[i][startcol];
                list1.push_back(ans);
            }
            startcol++;
        }
        
    }
    
    return list1; 
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  