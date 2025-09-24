#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define TOTAL_BITS 32

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

bool isEven(int n) {
    // method 1
    // return (n%2==0);

    // method 2
    return !(n&1);

    // method 3
    // return !(n-((n>>1)<<1));

    // method 4
    // return !(n<<(TOTAL_BITS-1));
}

void solve() {
    int n; 
    cin>>n;
    cout<<isEven(n)<<"\n";
}

int main(){
    solve();
    return 0;
}