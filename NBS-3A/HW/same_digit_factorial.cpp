#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int last_3_digits(int n){
    return n % 1000;
}

int same_digit_factorial(){
    int i = 1;
    while(true){
        int fact1 = factorial(i);
        int fact2 = factorial(i+1);
        if(last_3_digits(fact1) == last_3_digits(fact2)){
            return i;
        }
        i++;
    }
}

int main(){
    int same_3_digit = same_digit_factorial();
    cout << same_3_digit;
    return 0;
}