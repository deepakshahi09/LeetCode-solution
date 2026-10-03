class Solution {
    List<String> ans = new ArrayList<>();
    void sol(int op, int clo,int n,String curr){
        if(curr.length() == n*2){
            ans.add(curr);
            return;
        }
        if(op < n){
            sol(op+1,clo,n,curr+"(");
        }
        if(clo < op){
            sol(op,clo+1,n,curr+")");
        }
    }
    public List<String> generateParenthesis(int n) {
        ans.clear();
        sol(0,0,n,"");
        return ans;
    }
}