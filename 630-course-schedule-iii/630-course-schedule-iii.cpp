
  bool comp(vector<int> a,vector<int> b){
        return a[1]<b[1];
    }
class Solution {
public:
  
    int scheduleCourse(vector<vector<int>>& c) {
        int t=0;
        sort(c.begin(),c.end(),comp);
        priority_queue<int> q;
        for(int i=0;i<c.size();i++){
            if(t+c[i][0] <= c[i][1]){
                t+=c[i][0];
                q.push(c[i][0]);
            }else{
                if(!q.empty() && q.top() >c[i][0]){
                    int c1=q.top();
                    q.pop();
                    t-=c1;
                    t+=c[i][0];
                    q.push(c[i][0]);
                }
            }
        }
        return q.size();
    }
};