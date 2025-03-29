class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n = 0;
        for(int nu : hours){
            if(nu >= target){
                n++;
            }
        }
        return n;
        
    }
};