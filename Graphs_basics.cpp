class Solution {
public:

         void dfs(int node, vector<int> adj[],vector<int> &vis){
        vis[node]=1; // first node is visited by defalut
        // let node =0 and its neighbours are 1 and 2 then it:adj[node]
        // means 'it' is traversing 1 and 2 inside adj[0]

        for(auto it:adj[node]){
            if(!vis[it]){
                mins++;
                // it wala node visited nhi hai then hum uski depth me jayenge
                dfs(it,adj,vis);
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

// rotten tomatoes (bfs exclusive)

class Solution {
public:  



   
    int orangesRotting(vector<vector<int>>& grid) {
       
             
             // why dfs will not work here because the rotting is taking place at the simultaneously at the same level (yani at the dist of one) so we need to visit them level wise not depth wise 
        int n=grid.size();
        int m=grid[0].size();

        // { {row,col}, time } data str for bfs
       queue<pair<pair<int,int>,int>> q;
             // visited array
          int vis[n][m];

        //get all the rotten oranges 
        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(grid[i][j]==2){
                    q.push({{i,j},0}); // these all are rotten from before hence t=0
                   vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }

            }
        }
        int time=0;
        // defiing the movement above below left right for the rotting of oranges
        int moverow[]={1,0,-1,0};
        int movecol[]={0,1,0,-1};


        // now writing the bfs algo (not writing it in a fn cuz we need to traverse only once here)



             // main bfs logic
        while(!q.empty()){
            int row=q.front().first.first; //{{r, }  }
            int col=q.front().first.second;// {{ ,c} }
            int t=q.front().second;// { {,} t }
            q.pop(); // basic structure for this question to traverse the queue 
            time=max(t,time);

            // now to traverse the neighbours for rotting them with the help of movearray
            for(int i=0;i<4;i++){ // always 4 neghbours for any node
                  int neighrow=row+moverow[i];
                  int neighcol=col+movecol[i];
                  // check if these neighbours are valid (not going outside the box) or if it empty box or if it is already rottened
                  if(neighrow>=0&&neighcol>=0&&neighrow<n&&neighcol<m&&vis[neighrow][neighcol]!=2&&grid[neighrow][neighcol]==1){
                    q.push({{neighrow,neighcol},t+1}); // if they satisfy all the above condition only then we can rot them i.e add them in the queue and incraese the time by one
                    vis[neighrow][neighcol]=2;

                  }
            }


        }

       
// after everything is done we do a final check if there remains a fresh orange that was not been rottened in the grid that means our ans is impossible 

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]==1&&vis[i][j]!=2){
            return -1;
        }
    }
}
      

        
return time;


        
    }
};

