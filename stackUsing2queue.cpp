void QueueStack :: push(int x)
{
    if(q2.empty()) q1.push(x);
    else q2.push(x);
    return;
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.empty() and q2.empty()) return -1;
    int val;
     if(q2.empty()){
         while(q1.size() != 1) {
             q2.push(q1.front());
             q1.pop();
         }
         val = q1.front();
         q1.pop();
         return val;
     }
     
     while(q2.size() != 1) {
         q1.push(q2.front());
         q2.pop();
     }
     val = q2.front();
     q2.pop();
     return val;
     
}
