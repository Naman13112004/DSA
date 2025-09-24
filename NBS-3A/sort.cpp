#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define forn(i,n) for(int i = 0 ; i<n ; i++)

vi input_vector(){
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

void sortDesc(vi &arr){
    sort(arr.begin(), arr.end(), [](int a, int b){
        return a > b;
    });
}

void solve() {
    vi v = input_vector();
    sortDesc(v);
    print_vector(v);
}

int main(){
    solve();
    return 0;
}