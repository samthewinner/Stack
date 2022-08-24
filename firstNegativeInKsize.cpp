vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
     long long int s,e;
    s=e=0;
    queue<long long int>q;
    vector<long long int>ans;
    while(e-s!=k){
        if(a[e] < 0) q.push(a[e]);
        e++;
    }
    e = k-1;
    // e--;
    while(e<n){
        // while(!q.empty() and q.front()<s) q.pop();
        if(q.empty()) {ans.emplace_back(0);}
        else {ans.emplace_back(q.front());}
        if(a[s]<0) q.pop();
        s++;
        e++;
        if(a[e]<0)q.push(a[e]);
    }
    // if(ans.size() == 0){ans.resize(n-1,0); return ans;}
    // for(long long int i =0;i<n-1;i++){
    //     if(ans[i] == INT_MIN) ans[i] = 0;
    //     else ans[i] = a[ans[i]];
    // }
    return ans;
 }
