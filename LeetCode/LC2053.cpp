#include<bits/stdc++.h>
using namespace std;

typedef vector<string> vi;

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
    for(string i : v){
        cout << i << " ";
    }
}

string kthDistinct(vi &arr, int k) {
    map<string, int> freq_map;
    vi str;
    for(string x:arr){
        freq_map[x]++;
    }
    for(string x:arr){
        if(freq_map[x] == 1){
            str.push_back(x);
        }
    }
    string temp = "";
    if(k > str.size()){
        return temp;
    }
    else{
        temp = str[k-1];
    }
    return temp;
}

int main(){
    vi v = input_vector();
    int k;
    cout << "Enter k: ";
    cin >> k;
    string ans = kthDistinct(v, k);
    cout << ans;
    return 0;
}