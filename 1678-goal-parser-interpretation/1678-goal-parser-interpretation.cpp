class Solution {
public:
    string interpret(string c) {
        string ans = "";
        int n = c.size();
        for(int i = 0;i<n;i++){
            if(c[i] == 'G'){
                ans+='G';
            }
            else if(c[i] == '(' && c[i+1] == ')'){
                ans+='o';
                i++;
            }
            else{
                ans+="al";
                i+=3;
            }

        }
        return ans;
        
    }
};