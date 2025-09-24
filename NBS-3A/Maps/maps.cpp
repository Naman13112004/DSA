#include <bits/stdc++.h>
using namespace std;

// void print_map(map<string, vector<string>> &map){
//     for(int i = 0; i < map.size(); i++){
//         cout <<
//     }
// }

void populate_map(map<string, vector<string>> &crush_map)
{
    crush_map["Yug"] = {"Himani", "Aesha", "Mona Lisa"};
    crush_map.insert({"Aakash", {"Rohini"}});
}

void print_crush_list(vector<string> &crush_list){
    vector<string>::iterator itr;
    for (string crush : crush_list)
        {
            cout << crush << ", ";
        }
        cout << "\n";
}

void print_crush_map(map<string, vector<string>> &crush_map)
{
    map<string, vector<string>>::iterator itr;
    for (itr = crush_map.begin(); itr != crush_map.end(); itr++)
    {
        pair<string, vector<string>> pkv = (*itr);
        string student = pkv.first;
        vector<string> crush_list = pkv.second;
        cout << student << " : ";
        print_crush_list(crush_list);
    }
}

void playing_with_maps()
{
    map<string, vector<string>> crush_map;
    populate_map(crush_map);
    print_crush_map(crush_map);
    // pair<int, int> pl = {1,2};
}

int main()
{
    playing_with_maps();
    return 0;
}