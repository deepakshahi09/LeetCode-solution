class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small,equal,large,result;
        for(int num:nums){
            if(num < pivot){
                small.push_back(num);
            }
            else if(num == pivot){
                equal.push_back(num);
            }
            else{
                large.push_back(num);
            }
        }
        result.insert(result.end(),small.begin(),small.end());
        result.insert(result.end(),equal.begin(),equal.end());
        result.insert(result.end(),large.begin(),large.end());

        return result;
        

        
    }
};