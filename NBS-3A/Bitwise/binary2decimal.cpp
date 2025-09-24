#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;

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

int binary2decimal(int n){
    // int num = 0, index = 0;
    // while(n){
    //     int i = n&1;
    //     i = pow(2, index) * i;
    //     num += i;
    //     index++;
    // }
    // return num;
}

int binary2decimal(vi &b){
    int decimal = 0;
    int n = b.size();
    forn(i,b.size()) {
        if (b[i]) {
            decimal += pow(2,n-1-i);   
        }
    }
    return decimal;
}

int b2d_optimised(vi &b) {
    int decimal = 0;
    for(int x:b) {
        decimal = 2*decimal + x;
    }
    return decimal;
}

void solve() {
    // string binary; cin >> binary;
    vi binary = input_vector();

    int num = b2d_optimised(binary);
    cout << num <<"\n";
}

int main(){
    solve();
    return 0;
}