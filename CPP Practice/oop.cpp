#include<iostream>
#include<cmath>
using namespace std;

// Class to demonstrate Encapsulation
class BankAccount{
    private:
        float balance;
        string ownerName;
    
    public:
        BankAccount(float b, string on) : balance(b), ownerName(on){}

        // Function to deposit amount in the bank
        void deposit(float depositAmount){
            balance += depositAmount;
            cout << "Rs. " << depositAmount << " deposited successfully.\n";
        }

        // Function to withdraw amount from the bank
        void withdraw(float withdrawAmount){
            if(balance > withdrawAmount){
                balance -= withdrawAmount;
                cout << "Rs. " << withdrawAmount << " withdrawn from the account.\n";
            }else{
                cout << "Not enough balance\n";
            }
        }

        // Function to display account information
        void displayAccount(){
            cout << "Owner name: " << ownerName << ", Account balance: " << balance << "\n";
        }
};

// ------------------------------------------------------------------------------------------------------------------------------

// Base class to demonstrate Inheritance
class Character{
    protected:
        string name;
        int health;

    public:
        Character(string n, int h) : name(n), health(h){}
        virtual void displayStats(){
            cout << "Name: " << name << ", Health: " << health << "\n";
        }
};

// Derived class to demonstrate Inheritance
class Warrior : public Character{
    private:
        int strength;
    
    public:
        Warrior(string n, int h, int s) : Character(n, h), strength(s) {}
        void attack() {cout << name << " is attacking with strength " << strength << "\n"; }
        void displayStats() override {
            cout << "Name: " << name << ", Health: " << health << ", Strength: " << strength << "\n";
            attack();
        }
};

// Another derived class to demonstrate Inheritance
class Wizard : public Character{
    private:
        int mana;

    public:
        Wizard(string n, int h, int m) : Character(n, h), mana(m) {}
        void castSpell() {cout << name << " casts a spell with mana " << mana << "\n";}
        void displayStats() override {
            cout << "Name: " << name << ", Health: " << health << ", Mana: " << mana << "\n";
            castSpell();
        }
};

// ---------------------------------------------------------------------------------------------------------------------------------

// Base class 1 for multiple inheritance
class FlyingAbility{
    protected:
        int speed;
    
    public:
        FlyingAbility(int s) : speed(s) {}

        void fly(){
            cout << "Flying at speed " << speed << " kmph.\n";
        }
};

// Base class 2 for multiple inheritance
class ShootingAbility{
    protected:
        int ammo;
    
    public:
        ShootingAbility(int a) : ammo(a) {}

        void shoot(){
            cout << ammo << " ammo left in inventory.\n";
            ammo--;
        }
};

// Derived class for multiple inheritance
class JetFighter : public FlyingAbility, public ShootingAbility{
    private:
        string name;
    
    public:
        JetFighter(string n, int s, int a) : name(n), FlyingAbility(s), ShootingAbility(a) {}

        void engage(){
            cout << "Name: " << name << "\n";
            fly();
            shoot();
        }
};

// --------------------------------------------------------------------------------------------------------------------------------

// Compile time polymorphism - Function Overloding
class VolumeCalculator{
    private:
        double vol;

    public:
        // Function to calculate volume of cube
        void volume(double side){
            vol = side * side * side;
        }

        // Function to calculate volume of cylinder
        void volume(double radius, double height){
            vol = M_PI * radius * radius * height;
        }

        // Function to calculate volume of cuboid
        void volume(double length, double width, double height){
            vol = length * width * height;
        }

        void display(){
            cout << "Volume: " << vol << " m^3.\n";
        }
};

// --------------------------------------------------------------------------------------------------------------------------------

// Compile time polymorphism - Operator Overloding
class ComplexNumber{
    private:
        double realNumber, imaginaryNumber;

    public:
        // Constructor to initialize real part and imaginary part in complex number (a + bi)
        ComplexNumber(double r = 0, double i = 0) : realNumber(r), imaginaryNumber(i) {}

        // Operator Overloading
        ComplexNumber operator+(const ComplexNumber& other){
            return ComplexNumber(realNumber + other.realNumber, imaginaryNumber + other.imaginaryNumber);
        }

        // Function to display complex number in readable format
        void display(){
            if(imaginaryNumber >= 0) cout << realNumber << " + " << imaginaryNumber << "i\n";
            else cout << realNumber << " - " << -imaginaryNumber << "i\n";
        }
};

// --------------------------------------------------------------------------------------------------------------------------------

// Runtime polymorphism - Base class
class Enemy{
    public:
        virtual void attack(){
            cout << "Generic attack type\n";
        }
};

// Derived class 1
class Zombie : public Enemy{
    public:
        void attack() override {
            cout << "Zombie attacks with claws!\n";
        }
};

// Derived class 2
class Alien : public Enemy{
    public:
        void attack() override {
            cout << "Alien attacks with laser!\n";
        }
};

// -------------------------------------------------------------------------------------------------------------------------------

// Abstraction task - Base class
class PaymentMethod{
    public:
        virtual void pay(float amount) = 0;
};

// Derived class 1
class CreditCard : public PaymentMethod{
    public:
        void pay(float amount) override {
            cout << "Paying Rs. " << amount << " using Credit Card...\n";
        }
};

// Derived class 2
class UPI : public PaymentMethod{
    public:
        void pay(float amount) override {
            cout << "Paying Rs. " << amount << " using UPI...\n";
        }
};

// --------------------------------------------------------------------------------------------------------------------------------

int main(){

    // Encapsulation
    // BankAccount ba(1000, "Naman Jain");
    // ba.displayAccount();
    // ba.deposit(123.5);
    // ba.displayAccount();
    // ba.withdraw(12345);
    // ba.withdraw(12.5);
    // ba.displayAccount();

    // ----------------------------------------------------------------------------------------------------------------------------

    // Inheritance
    // Warrior w("Thor", 100, 80);
    // w.displayStats();
    // Wizard wi("Merlin", 100, 120);
    // wi.displayStats();

    // Multiple Inheritance
    // JetFighter jf("Naman Jain", 120, 50);
    // jf.engage();

    // ----------------------------------------------------------------------------------------------------------------------------

    // Compile time polymorphism - Function Overloding 
    // VolumeCalculator vc;
    // vc.volume(5.2);
    // vc.display();

    // vc.volume(2, 3);
    // vc.display();

    // vc.volume(5, 7, 9);
    // vc.display();

    // ---------------------------------------------------------------------------------------------------------------------------

    // Compile time polymorphism - Operator Overloding
    // ComplexNumber c1(-9, 4);
    // ComplexNumber c2(2, -8);
    // ComplexNumber c3 = c1 + c2;

    // c3.display();

    // ---------------------------------------------------------------------------------------------------------------------------

    // Runtime Polymorphism
    // Enemy* enemy;
    // Zombie z;
    // Alien a;
    
    // enemy = &z;
    // enemy->attack();

    // enemy = &a;
    // enemy->attack();

    // ---------------------------------------------------------------------------------------------------------------------------

    // Abstraction
    PaymentMethod* pm;
    CreditCard cc;
    UPI upi;

    pm = &cc;
    pm->pay(1500.00);

    pm = &upi;
    pm->pay(999.99);

    return 0;
}