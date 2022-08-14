vector<vector<int>> overlappedInterval(vector<vector<int>>& in) {
         sort(in.begin(),in.end());
         stack<vector<int>>s;
         s.push(in[0]);
         for(int i=1;i<in.size();i++){
             vector<int> v = s.top();s.pop();
            //  v[0] = max(in[0],v[0]);
            //  v[1] = max(in[1],v[1]);
            if(v[1]>=in[i][0]) {
                v[1] = max(v[1],in[i][1]);
                s.push(v);
            }
            else {
                s.push(v);
                s.push(in[i]);}
         }
         int i=in.size()-1;
         vector<vector<int>>ret(in.size());
         while(!s.empty()){
             auto temp = s.top();s.pop();
             ret[i] = temp;i--;
         }
         return ret;
    }
};
