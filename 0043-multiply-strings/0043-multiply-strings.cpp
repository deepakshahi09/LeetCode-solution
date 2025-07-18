class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        vector<int>result(n+m,0);

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int nu = (num1[i] - '0') * (num2[j] - '0');
                
                int sum = nu + result[i+j+1];
                result[i + j + 1] = sum % 10;
                result[i+j] += sum/10;
            }
        }
        string res = "";
        for(int nu : result){
            if(!(res.empty() && nu==0)){
                res+= to_string(nu);
            }
        }
        return res.empty()? "0" : res;
        
    }
};