queue<int> modifyQueue(queue<int> q, int k) {
    queue<int>ans;
    stack<int>st;
    // int l = 1;
    while(true){
        if(q.size() < k) break;
        int t = k;
        while(t--){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
      return ans;
}
