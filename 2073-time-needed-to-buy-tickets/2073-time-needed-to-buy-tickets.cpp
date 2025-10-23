class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        int time = 0;
        while(!q.empty()){
            int i = q.front();
            q.pop();

            tickets[i]--;
            time++;

            if(i==k && tickets[i] == 0){
                return time;
            }
            if(tickets[i] > 0){
                q.push(i);
            }
        }
        return time;
    }
};