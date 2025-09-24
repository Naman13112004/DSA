#include<bits/stdc++.h>
using namespace std;

int find_remainder(int base, int power, int divisor){
    int remainder = 0;
    for(int i = 1; i <= power; i++){
        remainder = ((int)pow(base, i) * base) % divisor;
    }
    return remainder;
}

int main(){
    int base, power, divisor;
    cout << "Base Power Divisor: ";
    cin >> base >> power >> divisor;
    int remainder = find_remainder(base%divisor, power, divisor);
    cout << "Remainder: " << remainder;
    return 0;
}