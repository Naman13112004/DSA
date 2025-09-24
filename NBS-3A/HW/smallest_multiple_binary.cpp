#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool is_binary(int n){
    while(n != 0){
        int temp = n % 10;
        if(temp > 1){
            return false;
        }
        n /= 10;
    }
    return true;
}

int smallest_multiple_binary(int n){
    int temp = n;
    int i = 2;
    while(true){
        if(is_binary(n)){
            return n;
        }
        n = temp*i;
        i++;
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int num = smallest_multiple_binary(n);
    cout << num;
    return 0;
}