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

vector<int> frequencySort(vector<int>& nums) {
    map<int, int> freq_map;
    vector<int> result;

    for (int num : nums) {
        freq_map[num]++;
    }

    vector<pair<int, int>> freq_vector(freq_map.begin(), freq_map.end());

    sort(freq_vector.begin(), freq_vector.end(),
        [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return (lhs.second == rhs.second) ? (lhs.first > rhs.first)
                                                : (lhs.second < rhs.second);
        });
    
    for(const auto& [value, freq] : freq_vector){
        result.insert(result.end(), freq, value);
    }

    return result;
}

void solve() {
    vi v = input_vector();
    print_vector(v);
}

int main(){
    solve();
    return 0;
}