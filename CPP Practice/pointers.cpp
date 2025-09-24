#include<bits/stdc++.h>
using namespace std;

// Pointer, References, Structs and Classes

void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int& first, int& second){
    first = first ^ second;
    second = first ^ second;
    first = first ^ second;
}

struct Book {
    string name;
    string author;
    int length;
};

void changeContent(struct Book* book){
    book->name = "Ikigai";
    book->length = 250;
}

class Man{
    public:
        string name = "John";
        int height = 172;
        int age = 25;

    void changeData(){
        name = "Helix";
        age = 35;
        height = 173;
    }
};

int& newRef(int& newReference){
    return newReference;
}

int main(){
    // 1 and 2
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << " and b = " << b;
    swapPointer(&a, &b); // Using pointers
    swapReference(a, b); // Using references
    cout << "\nAfter swap: a = " << a << " and b = " << b;

    // 3
    struct Book book = {"Do It Today", "Darius Foroux", 140};
    struct Book* p = &book;
    changeContent(p);
    cout << "Book details: " << p->name << " " << p->author << " " << p->length;

    // 4
    Man man;
    Man* p1 = &man;
    p1->changeData();
    cout << p1->name << " " << p1->age << " " << p1->height;

    // 5
    int a = 25;
    int& newreference = newRef(a);
    // newreference = 30;
    cout << a;

    return 0;
}