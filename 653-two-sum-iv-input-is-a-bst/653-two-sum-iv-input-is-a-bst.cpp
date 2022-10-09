class Solution {

private:

	// Want a vector to store the values of each node present in tree
    vector<int> vec;
	
public:
    
    // we are doing in-Order traversal bcoz it will give us the vector sorted values
    void inorder(TreeNode* root) {
        if (root==NULL) return;
        
        // Inorder:
        // left Root right
        
        inorder(root->left); // calling recursion for left
        vec.push_back(root->val); // pushing root's val in vector
        inorder(root->right); // calling recursion for right
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        // If only 1 node present in tree then return False
        // bcoz in question they asked if there exist sum two elements eqaul to k
        if(root->left==NULL && root->right==NULL) 
            return false;
        
        // calling inorder function
        // This Inorder will give us vector of values In 
        // ASCENDING Order (smallest at first, Largest at end)
        inorder(root);
        
        // using two pointer approach
        int start = 0; // initialized at start
        int end = vec.size()-1; // initialized at end
        
        while (start < end) { 
            
            if (vec[start] + vec[end] == k) { 
                return true;
            }
            else {
                
                // If Sum is less than k, then we have to consider 
                // bigger element to add than the previous element
                if (vec[start] + vec[end] < k) 
                    start++; // so consider next element from FRONT
                
                // If Sum is More than k, then we have to consider 
                // smaller element to add than the previous element
                else 
                    end--; // so consider previous element from BACK
            }
        }
        
        // We are at this line means while loop is over and we didn't get those two values whos sum is equal to k
        // so return false
        return false;
    }

};