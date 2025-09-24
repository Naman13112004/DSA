#include<iostream>
using namespace std;

template <typename T>
void compare(T x, T y){
    if(x > y) cout << x << " is greater than " << y << "\n";
    else if(x < y) cout << x << " is less than " << y << "\n";
    else cout << x << " is equal to " << y << "\n";
}

template <typename T1, typename T2>
void compare(T1 x, T2 y){
    if(x > y) cout << x << " is greater than " << y << "\n";
    else if(x < y) cout << x << " is less than " << y << "\n";
    else cout << x << " is equal to " << y << "\n";
}

template <typename T1, typename T2>
class Pair{
    private:
        T1 first;
        T2 second;

    public:
        Pair(T1 f, T2 s) : first(f), second(s) {}

        void display(){
            cout << "First: " << first << " Second: " << second << "\n";
        }
};

int main(){
    compare<int>(1, 2);
    compare<string>("Naman", "Lucky");

    // compare<int, string>(1, "Naman"); // Gives mismatch type error
    compare<int, float>(1, 1.0); 

    Pair<string, int> p("Naman", 101);
    p.display();

    return 0;
}