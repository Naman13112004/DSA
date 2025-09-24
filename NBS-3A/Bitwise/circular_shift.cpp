#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0 ; i<n ; i++)
#define NO_OF_BITS 32

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

int circular_right_shift(int n, int d) {
    return (n>>d) | (n<<(NO_OF_BITS - d));
}

// int mihir_circular_right_shift(int n, int d) {
//     while(d--) { // d*O(1) = O(d)
//     }
//     return n;
// }

void solve() {
    // int n,d; cin>>n>>d;
    // for(int i=1;i<=10; i++) {
    //     if (i%100==0) { cout<<i<<'\n'; }
    //     for(int j = 1; j<=16;j++) {
    //         if (circular_right_shift(i,j)!=mihir_circular_right_shift(i,j)) {
    //             cout<<i<<", "<<j<<": Values Differ\n";
    //         }
    //     }
    // }
    cout<<circular_right_shift(INT_MAX,2)<<'\n';
    // cout<<circular_right_shift(10,2)<<'\n';
}

int main(){
    solve();
    return 0;
}