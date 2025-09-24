#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

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

unordered_set<int> singleNumber(vi &nums) {
    unordered_set<int> s;
    for(int x : nums){
        if(s.find(x) != s.end()){
            s.erase(s.find(x));
        }
        else{
            s.insert(x);
        }
    }
    return s;
}

void print_unordered_set(unordered_set<int> &s){
    unordered_set<int>::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++){
        cout << *itr << " ";
    }
}

int main(){
    vi v = input_vector();
    // print_vector(v);
    unordered_set<int> unique_numbers = singleNumber(v);
    print_unordered_set(unique_numbers);
    return 0;
}  