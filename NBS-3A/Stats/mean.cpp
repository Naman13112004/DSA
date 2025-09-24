#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

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
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}



int main(){
    vi v = input_vector();
    print_vector(v);
    // find_mean();
    return 0;
}