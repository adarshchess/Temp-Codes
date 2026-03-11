class Solution {
public:

        void dfs(int node,vector<int> adj[], vector<int> &vist ){
            vist[node]=1;
            for(auto it: adj[node]){
                if(!vist[it]){
                    dfs(it,adj,vist);
                }
            }
        }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int prov=0;
        // here we are given adj matrix but we are used to do it in adj list so we make our own adj list out of the matrix 
        int n=isConnected.size();
        int m=isConnected[0].size();
        vector<int> adj[n+1]; // adj list issme har node ke neighbours store honge as vector elements
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isConnected[i][j]==1&&i!=j){// matlab uss idx pe node exist kar raha hai
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                }
            }
            }// yaha tak our adj list is created

            // for traversal we create a visited list 
            vector<int> vist(n);

            // main logic for a prov if that node is not visited then it is a new provience
            // so we call the traversal again on

            for(int i=0;i<n;i++){
                if(!vist[i]){
                    prov++;
                    dfs(i,adj,vist);
                }
            }

        


        return prov;
    }
};
