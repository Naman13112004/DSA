#include<bits/stdc++.h>
using namespace std;

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

void print_num(int n) {
    if(n == 1) { 
        cout << 1 << "\t";
        return;
    }
    print_num(n-1);
    cout << n << "\t";
}

void print_num_reverse(int n){
    if(n == 1) { 
        cout << 1 << "\t";
        return;
    }
    cout << n << "\t";
    print_num_reverse(n-1);
}

void print_num_reverse2(int n, int num){
    if(n == num) { 
        cout << num << "\t";
        return;
    }
    print_num_reverse2(n+1, num);   
    cout << n << "\t";
}

void solve() {
    int n; cin>>n;
    print_num_reverse2(1, n);
}

int main(){
    solve();
    return 0;
}