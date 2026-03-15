
// BFS Traversals 


void connected_bfs()
{
	vector<vector<int>> g(n+1);
	//take input
     vector<bool> vis(n+1,0);
     queue<int> q;
     q.push(1);
	vis[1]=1;
vector<int> order;
	while(!q.empty())
	{
		int u = q.front();
  	     order.push_back(u);

		q.pop();
		for(int v: g[u])
		{
			if(vis[v])
			continue;
			q.push(v);
              vis[v]=1;
         }
     }
}


void not_fully_connected_bfs()
{
	vector<vector<int>> g(n+1);
	//take input
     vector<bool> vis(n+1,0);
     vector<int> order;
     for(int i=1;i<=n;i++)
     {
       if(vis[i]==1)
       continue;
     queue<int> q;
     q.push(i);
	vis[i]=1;
	
	while(!q.empty())
	{
		int u = q.front();
         order.push_back(u);
		q.pop();
		for(int v: g[u])
		{
			if(vis[v])
			continue;
			q.push(v);
              vis[v]=1;
         }
     }   
    }
}
