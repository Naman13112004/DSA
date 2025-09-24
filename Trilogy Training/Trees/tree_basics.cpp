#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0 ; i < n ; i++) // macros

struct Node {
    int data;
    Node *left;
    Node *right;

    Node() {
        int data = -1;
        left = right = nullptr;
    }
    
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

Node* dummy_tree() { 
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    return root;
}

// DFS

void print_inorder(Node* root) {
    if((!root->left) && (!root->right)) {
        cout << root->data << " ";
        return;
    }
    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}

void print_preorder(Node* root) {
    if((!root->left) && (!root->right)) {
        cout << root->data << " ";
        return;
    }
    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_postorder(Node* root) {
    if((!root->left) && (!root->right)) {
        cout << root->data << " ";
        return;
    }
    print_postorder(root->left);
    print_postorder(root->right);
    cout << root->data << " ";
}

void print_levelorder(Node *root) {
    Node *temp = root;
    queue<Node*> track;
    track.push(root);
    while(!track.empty()) { 
        cout << track.front()->data << " ";

        if(temp->left) track.push(temp->left);
        if(temp->right) track.push(temp->right);

        track.pop();
        temp = track.front();
    }
}

void print_level_wise_order(Node *root) {
    Node *temp = root;
    queue<Node*> track;
    track.push(root);
    while(!track.empty()) { 
        int size = track.size();
        while(size) {
            cout << track.front()->data << " ";
            if(temp->left) track.push(temp->left);
            if(temp->right) track.push(temp->right);
            track.pop();
            temp = track.front();
            size--;
        }
        cout << "\n";
    }
}

void print_top_nodes(unordered_map<int, int> top_nodes, int minDist, int maxDist) {
    for(int i = minDist; i <= maxDist; i++) {
        cout << top_nodes[i] << "\t";
    }
    cout << "\n";
}

void print_top_view(Node* root) {
    if(!root) return;
    unordered_map<int, int> top_nodes;
    int minDist = INT_MAX, maxDist = INT_MIN;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()) {
        Node* curr = q.front().first;
        int dist = q.front().second;
        if(!top_nodes[dist]) {
            top_nodes[dist] = curr->data;
        }
        if(curr->left) {
            q.push({curr->left, dist-1});
        }
        if(curr->right) {
            q.push({curr->right, dist+1});
        }
        q.pop();
    }
    print_top_nodes(top_nodes, minDist, maxDist);
}

void solve() {
    Node* root = dummy_tree();
    print_top_view(root);
    // cout << "Inorder: ";
    // print_inorder(root);
    // cout << "\n";
    // cout << "Preorder: ";
    // print_preorder(root);
    // cout << "\n";
    // cout << "Postorder: ";
    // print_postorder(root);
    // cout << "\n";
    // cout << "Levelorder: \n";
    // print_levelorder(root);
    // cout << "\n";
    // cout << "Level wise order: \n";
    // print_level_wise_order(root);
    // cout << "\n";
}

int main(){
    solve();
    return 0;
}