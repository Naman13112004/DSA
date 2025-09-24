#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define forn(i, n) for (int i = 0; i < n; i++);

vi input_vector()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vi v(n);
    cout << "Enter the elements:" << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vector(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

// int find_mode_n2(vi &data){
//     int mode = data[0];
//     int max_freq = 0;
//     for(int i = 0; i < data.size(); i++){ // n * O(n) => O(n^2) with k = 1
//         int curr_freq = 0;
//         for(int j = 0; j < data.size(); j++){ // O(n)
//             if(data[i] == data[j]){
//                 curr_freq++;
//                 if(max_freq < curr_freq){
//                     max_freq = curr_freq;
//                     mode = data[i];
//                 }
//             }
//         }
//     }
//     return mode;
// }

// vi find_mode_n2(vi &data)
// {
//     // int mode = data[0];
//     if(!data.size()){return vi();}
//     vi mode;
//     int max_freq = 1;
//     for (int i = 0; i < data.size(); i++)
//     { // TC - n * O(n) => O(n^2) with k = (n-1)/2n
//         int curr_freq = 1;
//         for (int j = i + 1; j < data.size(); j++)
//         { // O(n)
//             if (data[i] == data[j])
//             {
//                 curr_freq++;
//             }
//         }

//         if(curr_freq == max_freq){
//             mode.push_back(data[i]);
//         }

//         if (max_freq < curr_freq)
//         {
//             max_freq = curr_freq;
//             mode = {data[i]};
//         }
//     }
//     return mode;
// }

// Next class optimizing the code and reducing the time complexity

// vi find_mode_n_logn(vi &v)
// {
//     if (!v.size())
//     {
//         return vi();
//     }
//     sort(v.begin(), v.end()); //TC -> n*logn

//     int max_count = 1, count = 1;
//     vi mode;
//     for (int i = 1; i < v.size(); i++)
//     {
//         // else{
//         if (count == max_count)
//         {
//             mode.push_back(v[i - 1]);
//         }
//         else if (count > max_count)
//         {
//             max_count = count;

//             mode = {v[i - 1]};
//         }
//         count = (v[i] == v[i - 1]) ? count+1 : 1;
//         // }
//     }
//     return mode;
// }


//Finding mode through frequency map
vi find_mode(vi &v)
{
    map<int, int> freq_map;
    int max_freq = 0;
    for (int x : v)
    {
        freq_map[x]++;
    }
}

int main()
{
    vi data = input_vector();
    vi mode = find_mode(data);
    cout << "Mode: ";
    print_vector(mode);
    return 0;
}