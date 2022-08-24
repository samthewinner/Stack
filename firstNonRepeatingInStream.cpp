string FirstNonRepeating(string s){
		    string ans= "";
		    vector<int>a(26,0);
		    queue<char>q;
		  //  q.push(s[0]);
		    for(int i=0;i<s.size();i++){
		        a[s[i] - 'a']++;
		        q.push(s[i]);
		        while(!q.empty() and a[q.front()-'a']>1 ) q.pop();
		        if(q.empty())ans+='#';
		        else ans+=q.front();
		    }
		    return ans;
		}
