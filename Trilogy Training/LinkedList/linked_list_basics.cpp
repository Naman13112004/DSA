#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0 ; i<n ; i++) // macros
#define forLL(temp, head) for(Node *temp = head; temp; temp = temp->next)

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

void loop_and_shift_head() {
    Node *head = nullptr;
    forn(i, 5) {
        head = new Node(i+11, head);
    }
    print_list(head);
}

class LinkedList {
    Node *head;

    LinkedList() {
        head = nullptr;
    }

    LinkedList(Node *head) {
        this->head = head;
    }

    void insertNodeTail(int data);
    void deleteNode(int pos);
    void print_list();
    int size();
    bool search(int val);
};

void LinkedList::insertNodeTail(int data) { // :: -> scope resolution operator
    if(!head) {
        head = new Node(data);
        return;
    }
    Node *temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

void LinkedList::deleteNode(int pos) { 
    if(!head) {
        cout << "LL is empty" << endl;
        return;
    }
    if(pos == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    if(pos > size()) {
        cout << "Pos > Size of LL" << endl;
        return;
    }   

    Node *prev;
    for(prev = head; pos > 2; prev = prev->next, pos--) {
        // code should break at prev
    }
    Node *temp = prev->next;
    prev->next = prev->next->next;
    delete temp;
}

void LinkedList::print_list() { 
    Node *temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int LinkedList::size() { 
    Node *temp = head;
    int count = 0;
    while(temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

bool LinkedList::search(int val) { 
    Node *temp = head;
    bool isPresent;
    while(temp != nullptr) {
        isPresent = temp->data == val;
    }
    return isPresent;
}

void playing_with_nodes() { 
    // using_better_constructor();
    // loop_and_shift_head();

    LinkedList list1(new Node(1));
}

void solve() {
    playing_with_nodes();
}

int main(){
    solve();
    return 0;
}