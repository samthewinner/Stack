 bool isSafe(int x,int y,int m,int n){
        return (x>=0 and x<m and y>=0 and y<n);
    }
    
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    queue<pair<int,int>>q;
	    int m = grid.size();
	    int n = grid[0].size();
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(grid[i][j] == 1)q.push({i,j});
	        }
	    }
	    int dx[5] = {0,-1,0,1,0};
	    int val = 0;
	    while(!q.empty()){
	        val++;
	        int s = q.size();
	        for(int i=0;i<s;i++){
	            int x = q.front().first;
	            int y = q.front().second;
	            q.pop();
	        for(int i=1;i<5;i++){
	            int nx = x+dx[i-1];
	            int ny = y+dx[i];
	             if(isSafe(nx,ny,m,n)){
	                 if(grid[nx][ny] == 0){
	                     grid[nx][ny] = val*10;
	                     q.push({nx,ny});
	                 }
	             }
	        }
	        }
	    }
	    
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(grid[i][j] == 1)grid[i][j] = 0;
	            
	        }
	    }
	    
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(grid[i][j] != 1)grid[i][j] /= 10;
	            
	        }
	    }
	    
	    return grid;
	    
	}
