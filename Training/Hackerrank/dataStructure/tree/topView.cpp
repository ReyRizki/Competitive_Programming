#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void topView(Node * root) {
        if (not root)
            return;
        
        queue<pair<Node*, int>> nodeViews;
        pair<Node *, int> view = make_pair(root, 0);
        map<int, int> result;

        nodeViews.push(view);

        while (not nodeViews.empty())
        {
            view = nodeViews.front();

            if (result.count(view.second) == 0)
                result[view.second] = view.first->data;

            if (view.first->left)
                nodeViews.push(make_pair(view.first->left, view.second - 1));

            if (view.first->right)
                nodeViews.push(make_pair(view.first->right, view.second + 1));

            nodeViews.pop();
        }

        for (auto it = result.begin(); it != result.end(); ++it)
            cout << it->second << " ";
    }

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.topView(root);

    return 0;
}
