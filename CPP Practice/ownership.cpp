#include<iostream>
#include<memory>
#include<string>
using namespace std;

class Game{
    public:
        string name;
        // Constructor
        Game(string n) : name(n) {
            cout << name << " created. \n";
        }
        // Destructor
        ~Game(){
            cout << name << " destroyed. \n";
        }

};

class Person{
    public:
        weak_ptr<Person> relation;
        string type;
        Person(string t) : type(t) {}
};

int main(){
    // Using shared_ptr - 1
    shared_ptr<Game> g1 = make_shared<Game>("Game1");
    auto g2 = g1;
    cout << g1.use_count() << "\n";

    // Using weak_ptr to avoid circular memory leaks - 2
    shared_ptr<Person> p1 = make_shared<Person>("Parent");
    shared_ptr<Person> p2 = make_shared<Person>("Child");
    p1->relation = p2;
    p2->relation = p1;
    cout << p1.use_count() << "\n";
    cout << p2.use_count() << "\n";

    // use_count() used in above two codes - 3

    return 0;
}