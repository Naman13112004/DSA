#include<bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0 ; i<n ; i++)

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

void solve() {
    int a = 100023;

    double b = log(a)/log(2);
    // int b = a/2;
    // int b = a>>2;
    // cout<<b<<"\n";
}

int main(){
    auto start = std::chrono::high_resolution_clock::now();
    forn(i,1e7) {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
 
    duration<double> duration = end - start;

    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;
    return 0;
}