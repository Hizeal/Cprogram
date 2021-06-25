 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
class solution
{
private:
    vector<int> res;
public:
    vector<int> postorderTraval(Treenode *root){
        postorder(root,res);
        return res;
    }
    void postorder(Treenode *root,vector<int> & res){
        if(!root) return;
        postorderTraval(root -> left);
        postorderTraval(root -> right);
        res.push_back(root -> val);
    }
};

class solution{
    public:
        vector<int> postorderTraval(Treenode *root){
            if (!root) return;
            vector<int> res;
            stack<Treenode *> postorder;
            postorder.push(root);
            while (!postorder.empty())
            {
                Treenode *temp = postorder.top();
                postorder.pop();
                res.push_back(temp -> val);
                if(temp -> left) postorder.push(temp -> left);
                if(temp -> right) postorder.push(temp -> right);
            }
            reverse(res.begin(),res.end())

        }
}


