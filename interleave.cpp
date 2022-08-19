#include <bits/stdc++.h>
typedef std::vector<int> veci;
#define eb emplace_back
#define print(a) for(auto it:a) std::cout<<it<<" ";

using namespace std;

void interleave(veci a){
   veci ans;
//    cout<<a.size();
   queue<int>q1,q2;
   int n = a.size();
   int i=0;

   while (i<n/2)
   {
    q1.push(a[i]);i++;
   }

   while (i<n)
   {
    q2.push(a[i]);i++;
   }
// print(a)
i=0;
   while(i<n){
      if(i%2 == 0){
         ans.eb(q1.front());
         q1.pop();
      }
      else{
         ans.eb(q2.front());
         q2.pop();
      }     
      i++; 
   }
   print(ans)
}

int main(){
   veci a;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      int val ;cin>>val;
      a.push_back(val);
   }
   interleave(a);
}