#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;

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

vvi input_column_matrix(){
    int row,column;
    cout << "Enter rows:"; cin>>row;
    cout << "Enter columns:"; cin>>column;
    vvi matrix(row, vi(column));
    cout << "Enter the elements:" << "\n";
    forn(i,column){
        forn(j, row){
            cin>>matrix[j][i];
        }
    }
    return matrix;
}

void print_column_matrix(vvi &matrix){
    forn(i, matrix.size()){
        forn(j, matrix[i].size()){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void print_set(set<string> str){
    for(auto itr = str.begin(); itr != str.end(); itr++){
        cout << *itr << " ";
    }
}

void solve() {
    vvi matrix = input_column_matrix();
    print_column_matrix(matrix);
}

int main(){
    solve();
    return 0;
}