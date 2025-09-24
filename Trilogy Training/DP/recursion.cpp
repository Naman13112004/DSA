#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0 ; i<n ; i++) // macros

vi input_vector(){
    // Iterator is used for iterating through a composite data type which is iterable, using a pointer
    // vi::iterator itr;
    // cout << endl; -> New line (end of line)
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vi v(n);
    cout << "Enter the elements:" << "\n";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    return v;
}

void print_vector(vi &v){
    for(int i : v){
        cout << i << " ";
    }
}

void print_set(set<string> str){
    for(auto itr = str.begin(); itr != str.end(); itr++){
        cout << *itr << " ";
    }
}

int fibo(int n) {
    if(n < 2) return n;
    return fibo(n-1) + fibo(n-2);
}

int fibonaaci(int n) {
    if(n < 2) return n;
    return fibonaaci(n-1) + fibonaaci(n-2);
}

int fibonaaci_memoization(int n, vi &arr) {
    if(n < 2) return n;
    return fibonaaci(n-1) + fibonaaci(n-2);
}

void print_1_to_n(int n) {
    if(n == 0) return;
    print_1_to_n(n-1);
    cout << n << " ";
}

void print_n_to_1(int n) {
    if(n == 0) return;
    cout << n << " ";
    print_n_to_1(n-1);
}

int vector_sum(vi &arr) {
    
}

int fact(int n) {
    return (n < 0) ? -1 : (n < 2) ? 1 : n * fact(n-1);
    // if(n < 0) return -1;
    // if(n < 2) return 1;
    // return n * fact(n-1);
}

void solve() {
    int n; cin >> n;
    vi arr = input_vector();
    fibonaaci_memoization(n, arr);
}

int main(){
    solve();
    return 0;
}