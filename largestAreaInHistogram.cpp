long long getMaxArea(long long a[], int n)
    {
        stack<int>s;
        vector<long long int>nse(n,0),pse(n,0);
        // populate nse array
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and a[s.top()]>=a[i] ) s.pop();
            if(s.empty()) nse[i] = n;
            else nse[i] = s.top();
            s.push(i);
        }
        
        // empty stack for reuse
        while(!s.empty()) s.pop();
        
        // populate pse array
        for(long long int i=0;i<n;i++){
            while(!s.empty() and a[s.top()]>=a[i]) s.pop();
            if(s.empty()) pse[i] = -1;
            else pse[i] = s.top();
            s.push(i);
        }
        long long int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,(a[i] * (nse[i]-pse[i]-1)));
        }
        return ans;
    }
