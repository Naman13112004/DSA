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

void print_vi(vi &v){
    for(int i : v){
        cout << i << " ";
    }
}

// void print_vb(vb &v) {
//     for(bool x:v) {
//         cout<<x<<" ";
//     }
//     cout<<"\n";
// }

void print_set(set<string> str){
    for(auto itr = str.begin(); itr != str.end(); itr++){
        cout << *itr << " ";
    }
}

vi decimal_to_binary(int n) { // O(log(n)), k = 3/2
    vi binary; // O(1)
    while(n) { // log(n)
        binary.push_back(n&1);
        n >>= 1;
    }
    reverse(binary.begin(), binary.end()); // (log(n))/2
    return binary;
}

void solve() {
    int n; cin>>n;
    vi v =(decimal_to_binary(n));
    print_vi(v);
}

int main(){
    solve();
    return 0;
}