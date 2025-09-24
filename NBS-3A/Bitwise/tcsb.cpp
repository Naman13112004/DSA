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

int tcsb(int n) { // O(nlog(n)) -> O(log(n))
    int ans = 0;
    forn(i,n) { // O(n) * // log(n)
        ans += count_set_bits(i+1);  // O(log(n))
    }
    return ans;
}

void solve() {
    // int n; cin>>n;
    forn(i,10) {
        cout<<(i+1)<<": "<<tcsb(i+1)<<"\n";
    }
}

int main(){
    solve();
    return 0;
}