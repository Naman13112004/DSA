#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

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

int msb(int n) {
    // int bit_count = 0;
    // while(n) {
    //     bit_count++;
    //     n >>= 1;    
    // }
    // return bit_count-1;
    return floor(log2(n));
}

void solve() {
    int n; cin>>n;
    cout<<msb(n)<<"\n";
}

int main(){
    solve();
    return 0;
}