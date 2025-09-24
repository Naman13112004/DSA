#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0; i < n; i++)

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

int count_bits(int n) {
    int bit_count = 0;
    while(n) {
        bit_count++;
        n >>= 1;
    }
    return bit_count;
    // return floor(log2(n)) + 1;
}

int count_set_bits(int n) {
    int sbc = 0;
    while(n) {
        if (n&1) {
            sbc++;
        }
        n >>= 1;
    }
    return sbc;
}

int tcsb(int n) {
    int tcsb=0;
    forn(i,n) {
        n = i+1;
        while(n) {
            if (n&1) {
                tcsb++;
            }
            n >>= 1;
        }
    }
    return tcsb;
}

void solve() {
    int n; cin>>n;
    cout<<tcsb(n)<<"\n";
}

int main(){
    solve();
    return 0;
}