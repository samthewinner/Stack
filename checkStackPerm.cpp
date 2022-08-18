int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        int i ,j=0;
        stack<int>s;
        for(i =0;i<N;i++){
            s.push(A[i]);
            while(!s.empty() && s.top() == B[j]) {
                s.pop();j++;
            }
        }
        return s.empty();
    }
