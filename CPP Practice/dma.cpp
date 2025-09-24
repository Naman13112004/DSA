#include<iostream>
#include<string>
#include<memory>

using namespace std;

struct Student{
    string name;
    int age;
};

class Enemy{
    public:
        string type;
        int health;
        Enemy(string t, int h) : type(t), health(h) {}
};


int main(){
    // 1
    int* a = new int(10);
    cout << *a;
    delete a;

    // 2
    int* arr = new int[10];
    for(int i = 0; i < 10; i++){
        arr[i] = (i+1) * 7;
    }
    delete[] arr;

    // 3
    Student* st = new Student{"John", 25};
    cout << "\nName: " << st->name << " Age: " << st->age;
    delete st;
    
    // 4
    Enemy* e = new Enemy("Boss", 1000);
    cout << "\n" << e->type << " " << e->health;
    delete e;

    // 5
    unique_ptr<int> num = make_unique<int>(30);
    cout << "\n" << *num;
    unique_ptr<Enemy> enemy = make_unique<Enemy>("Boss", 1000);
    cout << "\n" << enemy->type << " " << enemy->health;

    return 0;
}