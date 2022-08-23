bool isSafe(int x,int y,int m,int n){
        return (x>=0 and x<m and y>=0 and y<n);
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int tim = 0,foc=0,count=0;
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 1) foc++;
                else if(grid[i][j] == 2) q.push({i,j});
            }
        }
        
        while(!q.empty()){
            tim++;
            int dx[5] = {0,-1,0,1,0};
            int s = q.size();
            for(int i=0;i<s;i++){
                int x= q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nx = x + dx[i];
                    int ny = y + dx[i+1];
                    if(isSafe(nx,ny,m,n)){
                        if(grid[nx][ny] == 1){
                            grid[nx][ny] = 2;
                        count++;
                        if(count == foc) return tim;
                        q.push({nx,ny});
                    }
                    }
                    
                }
            }
        }
        return -1;
    }
