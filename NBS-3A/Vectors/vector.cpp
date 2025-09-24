#include<bits/stdc++.h>
using namespace std;

int max_in_vector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }
    int max_e = INT_MIN;
    for(int i = 0; i < v.size(); i++){
        // if(max < v[i]){
        //     max = v[i];
        // }
        max_e = max(max_e, v[i]);
    }
    cout << "Max element is: " << max_e;
}

int min_element(vector<int> &v){
    int min_e = INT_MAX;
    for(int i = 0; i < v.size(); i++){
        min_e = min(min_e, v[i]);
    }
    return min_e;
}

void reverse(vector<int> &v){ // O(n) with k = 1
    vector<int> rev;
    for(int i=v.size()-1; i>=0; i--){ // O(n)
        rev.push_back(v[i]);
    }
}

void reverse(vector<int> &v){ // O(n) with k = 0.5
    int n = v.size();
    int l = 0; // r = n-l-1
    while(l < n/2){ // O(n/2)
        swap(v[l], v[n-1-l]);
        l++;
    }
}

vector<int> input_vector(){
    int n;
    cout << "Enter n" << "\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter values" << "\n";
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    return v;
}

void print_vector(vector<int> &v){
    cout << "Vector is: ";
    for(int x : v){
        cout << x << " ";
    }
}

void playing_with_vectors(){
    //arrays
    int n = 5;
    int a[n];
    //printing the array
    for(int i = 0; i < n; i++){
        a[i] = 2;
    }

    //vectors
    // vector<int> v;
    // vector<int> v(5, 2);

    // vector<int> v(5, 2);
    // //printing the vector
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << + " ";
    // }
    // cout << "\n";

    // vector<int> v2(n);
    // //user input in vector
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }

    // //printing the vector
    // for(int i = 0; i < n; i++){
    //     cout << v[i] << + " ";
    // }
}

int main(){
    // vector<int> v(5);
    // max_in_vector(v);
    // playing_with_vectors();

    vector<int> v = input_vector();
    print_vector(v);

    return 0;
}