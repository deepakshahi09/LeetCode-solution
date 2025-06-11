class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>strnums(nums.size());
        for(int i=0;i<nums.size();i++){
            strnums[i] = to_string(nums[i]);
        }
        sort(strnums.begin(),strnums.end(),[](string &a, string &b){
            return a+b>b+a;
        });
        if(strnums[0] == "0"){
            return "0";
        }
        string result;
        for(int i=0;i<strnums.size();i++){
            result+=strnums[i];
        }
        return result;
        
    }
};