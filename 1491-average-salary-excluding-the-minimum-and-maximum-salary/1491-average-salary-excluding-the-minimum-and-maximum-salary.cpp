class Solution {
public:
    double average(vector<int>& salary) {
        int sum  = 0;
        int min = salary[0];
        int max = salary[0];
        
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
            
            if(salary[i]<min){
                min = salary[i];
            }
            if(salary[i]>max){
                max = salary[i];
            }
        }
        double ans = sum-min-max;
        
        return ans/(salary.size()-2);
        
    }
};