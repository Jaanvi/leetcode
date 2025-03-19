/*
 // Definition for a Node.
 class Node {
 public:
     int val;
     Node* left;
     Node* right;
     Node* next;

     Node() : val(0), left(NULL), right(NULL), next(NULL) {}

     Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

     Node(int _val, Node* _left, Node* _right, Node* _next)
         : val(_val), left(_left), right(_right), next(_next) {}
 };
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        // Validate the given root. If the tree is empty, simply return the root.
        if (root == nullptr)
        {
            return root;
        }

        // Start traversing the tree level-wise using a queue.
        queue<Node*> q;
        q.push(root);

        while (!q.empty())
        {
            // Number of nodes at the current level.
            int levelSize = q.size();
            // Vector to store nodes of the current level.
            vector<Node*> level;
            while (levelSize--)
            {
                // Get the next node in the queue.
                Node* node = q.front();
                q.pop();

                // Add the node to the current level vector.
                level.push_back(node);

                // Add the left and right children to the queue if they exist.
                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
            }

            // Update the next pointers for all nodes in this level.
            for (int i = 1; i < level.size(); i++)
            {
                level[i - 1]->next = level[i];
            }
            // The next pointer of the last node remains NULL by default.
        }

        // Return the root of the modified tree.
        return root;
    }
};