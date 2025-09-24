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

int count_set_bits(int n) { // O(log(n))
    int sbc = 0;
    while(n) { // log(n)*1 = log(n)
        if (n&1) {
            sbc++;
        }
        n >>= 1;
    }
    return sbc;
}

bool isGray(int a, int b) {
    int x = a ^ b;
    return !(x&(x-1));
}

int count_different_bits(int a, int b) {
    int x = a ^ b;
    return count_set_bits(x);
}

// int f() {
//     while(n>0) {
//         int lsb = ();
//         n = n&(n-1);
//     }
// }

void solve() {
    int a,b; cin>>a>>b;
    cout<<count_different_bits(a,b)<<"\n";
}

int main(){
    solve();
    return 0;
}