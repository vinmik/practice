//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i,j;
        for(i=0;i<N;i++)
        {
            //cout<<"here"<<" "<<mat[i][0]<<" $$ "<<mat[i][M-1]<<endl;
            if(mat[i][0]<=X && mat[i][M-1]>=X)
            {
                for(j=0;j<M;j++)
                {
                    //cout<<mat[i][j]<<" ";
                    if(mat[i][j] == X)  return 1;
                }
                
            //return 0;
            }
            
        }
        
        return 0;
	}
	
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends