class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>red,dir;
        int n = senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]== 'R'){
                red.push(i);
            }
            else{
                dir.push(i);
            }
        }
        while(!red.empty() && !dir.empty()){
            int r = red.front();
            int d = dir.front();
            red.pop();
            dir.pop();

            if(r<d){
                red.push(r+n);
            }
            else{
                dir.push(d+n);
            }
        }
        return red.empty()?"Dire":"Radiant";
        
    }
};