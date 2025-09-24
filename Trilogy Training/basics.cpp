#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0 ; i<n ; i++) // macros

struct Node {
    int data;
    Node *next;

    Node() {
        data = 0;
        next = nullptr;
        // nullptr can be typecasted to NULL
    }

    Node(int data) {
        // hw - diff b/w NULL and nullptr
        this->data = data;
        this->next = nullptr;
    }

    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
    }
};

void print_list(Node *head) {
    Node *temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void creating_node_by_node() {
    Node *head = new Node(1);
    Node *second = new Node(2);
    head->next = new Node(2);
    Node *third = new Node(3);
    head->next->next = third;

}

void using_better_constructor() {
    Node *node4 = new Node(4);
    Node *node3 = new Node(3, node4);
    Node *node2 = new Node(2, node3);
    Node *head = new Node(1, node2);
    print_list(head);
}

void loop_and_shift_head() {
    Node *head = nullptr;
    forn(i, 5) {
        head = new Node(i+11, head);
    }
    print_list(head);
}

void playing_with_nodes() { 
    // using_better_constructor();
    loop_and_shift_head();
}

void solve() {
    playing_with_nodes();
}

int main(){
    solve();
    return 0;
}