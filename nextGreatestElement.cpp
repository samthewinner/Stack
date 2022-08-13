vector<long long> nextLargerElement(vector<long long> a, int n){
        vector<long long > ans(n);
        stack<long long>s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top() < a[i]){
                s.pop();
            }
            if(s.empty()) ans[i] = -1;
            else ans[i] = s.top();
            s.push(a[i]);
        }
        return ans;
    }
