class Solution {
public:
    int postindex;
    TreeNode* solve(vector<int>&inorder, vector<int>&postorder, int st, int lst){
        if(st > lst){
            return NULL;
        }
        TreeNode * root = new TreeNode(postorder[postindex--]);
        int pos;
        for(int i=st;i<lst;i++){
            if(inorder[i] == root->val){
                pos = i;
                break;
            }
        }
        
        root->right = solve(inorder,postorder,pos+1,lst);
        root->left = solve(inorder,postorder,st,pos-1);
        return root;

    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       
        postindex = postorder.size()-1;
        return solve(inorder,postorder,0,inorder.size()-1);
    }
};