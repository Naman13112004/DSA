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

double find_median(vi &v){
    double median_value;
    int size = v.size();
    vi temp = v;
    sort(temp.begin(), temp.end());
    return (size%2) ? temp[size/2] : temp[size/2] + temp[(size/2)-1] / 2.0;
}

double find_mean(vi &v){
    double mean_value = 0;
    for(int i:v){
        mean_value+=i;
    }
    return mean_value/v.size();
}

int main(){
    vi v = input_vector();
    print_vector(v);
    cout << "\nMedian: " << find_median(v) << endl;
    cout << "Mean: " << find_mean(v) << endl;
    return 0;
}