#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

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
        cout << i << "\t";
    }
    cout<<"\n";
}

void print_matrix_trivial(vvi &matrix) {
    int m = matrix.size(), n = matrix[0].size();
    forn(i,m) { // rows
        print_vector(matrix[i]);
        // forn(j,n) { // columns
        //     cout<<matrix[i][j]<<"\n";
        // }
    }
}

void print_matrix(vvi &matrix) {
    for(vi &v:matrix) {
        print_vector(v);
    }
}

void print_set(set<string> str){
    for(auto itr = str.begin(); itr != str.end(); itr++){
        cout << *itr << " ";
    }
}

void fill_vertically(vvi &matrix) {
    int m = matrix.size(), n = matrix[0].size();
    forn(i, m) {
        forn(j, n) {
            matrix[i][j] = (j*m) + (i+1);
        }
    }
}

void solve() {
    int m, n;
    cin>>m>>n;
    vvi matrix(m, vi(n));
    fill_vertically(matrix);
    print_matrix(matrix);
}

int main(){
    solve();
    return 0;
}