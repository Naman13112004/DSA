#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<sstream>
#include<unordered_set>
#include<algorithm>
#include<numeric>
#include<cctype>
#include<bitset>

// #include<bits/stdc++.h>

using namespace std;

int main(){
    // // Vector - Task 1
    // vector<int> arr;
    // arr.push_back(50);
    // arr.push_back(75);
    // arr.push_back(100);
    // arr.pop_back();
    // cout << "Size: " << arr.size() << endl;
    // for(int num : arr){
    //     cout << num << " ";
    // }
    // cout << endl;

    // // Vector - Task 2
    // int size, sum = 0;
    // cout << "Enter the size: ";
    // cin >> size;
    // vector<int> nums(size);
    // for(int i = 0; i < nums.size(); i++){
    //     cout << "Enter nums[" << i << "]: ";
    //     cin >> nums[i];
    // }
    // for(int num : nums) sum += num;
    // cout << "Sum: " << sum << endl;

    // // Vector - Task 3
    // vector<string> str = {"Knight", "Archer", "Mage"};
    // cout << "Second element: " << str.at(1) << endl; 
    // str.clear();
    // if(str.empty()) cout << "Vector is empty." << endl;
    // else cout << "Vector is not empty." << endl;

    // // Vector - Task 4
    // vector<char> chars = {'a', 'b', 'c', 'd'};
    // chars.insert(chars.begin()+1, 'z');
    // chars.erase(chars.begin()+2);
    // for(char c : chars) cout << c << " ";

    // // -----------------------------------------------------------------------------------------------------------------------------

    // // Iterator - Task 1
    // vector<string> ele = {"Element1", "Element2", "Element3", "Element4"};
    // vector<string>::iterator it;

    // for(it = ele.begin(); it != ele.end(); ++it){
    //     cout << *it << " ";
    // }
    // cout << "\n";

    // vector<string>::reverse_iterator rit;
    // for(rit = ele.rbegin(); rit != ele.rend(); ++rit){
    //     cout << *rit << " ";
    // }
    // cout << "\n";

    // // Iterator - Task 2 & 3
    // vector<int> num = {1,2,3,4,5};
    // // vector<int>::iterator nit;

    // for(auto nit = num.begin(); nit != num.end(); ++nit){
    //     *nit *= 2;
    //     cout << *nit << " ";
    // }
    // cout << "\n";

    // -----------------------------------------------------------------------------------------------------------------------------

    // List - Doubly Linked List
    // Task 1
    // list<int> number;
    // number.push_back(10);
    // number.push_back(20);
    // number.push_back(30);
    // number.push_front(5);
    // number.push_front(1);
    // number.pop_back();
    // number.pop_front();
    
    // for(auto it = number.begin(); it != number.end(); ++it){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // // Task 2
    // auto itr = number.begin();
    // advance(itr, 1);
    // number.insert(itr, 100);

    // auto itr2 = number.begin();
    // advance(itr2, 2);
    // number.erase(itr2);

    // for(auto it = number.begin(); it != number.end(); ++it){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // // Task 3
    // list<string> s;
    // s.push_back("String1");
    // s.push_back("String2");
    // s.push_back("String3");
    // list<string>::reverse_iterator reit;

    // for(reit = s.rbegin(); reit != s.rend(); ++reit){
    //     cout << *reit << " ";
    // }
    // cout << endl;

    // s.clear();
    // if(s.empty()) cout << "List is empty";
    // else cout << "List is not empty";

    // ----------------------------------------------------------------------------------------------------------------------------

    // Deque - Double ended queue
    // Task 1
    // deque<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_front(5);
    // arr.push_front(1);
    // cout << "Size of deque: " << arr.size() << "\n";
    // cout << "Front element of deque: " << arr.front() << "\n";
    // cout << "Last element of deque: " << arr.back() << "\n";
    // for(int val:arr){
    //     cout << val << " ";
    // }
    // cout << endl;

    // // Task 2
    // arr.insert(arr.begin()+1, 4);
    // arr.erase(arr.begin()+2);
    // deque<int>::reverse_iterator riit;
    // for(riit = arr.rbegin(); riit != arr.rend(); ++riit){
    //     cout << *riit << " ";
    // }
    // cout << endl;

    // // Task 3
    // arr.clear();
    // if(arr.empty()) cout << "The deque is empty";
    // else cout << "The deque is not empty";

    // -------------------------------------------------------------------------------------------------------------------------------

    // Stack - Task 1
    // stack<string> str;
    // str.push("Naman");
    // str.push("Atul");
    // str.push("Tanish");
    // cout << "Top: " << str.top() << endl;
    // str.pop();
    // cout << "New Top: " << str.top() << endl;
    // if(str.empty()) cout << "The stack is empty" << endl;
    // else cout << "The stack is not empty" << endl;

    // // Task 2
    // string name;
    // cout << "Enter the name: ";
    // getline(cin >> ws, name);
    // stack<char> rev_name;
    // for(char c : name) rev_name.push(c);
    // int stSize = rev_name.size();
    // for(int i = 0; i < stSize; i++){
    //     cout << rev_name.top();
    //     rev_name.pop();
    // }
    // cout << endl;
    
    // // Task 3
    // string checkParenthesis;
    // cout << "Enter the string to check for parenthesis: ";
    // cin >> checkParenthesis;

    // stack<char> check;
    // bool isBalanced = true;

    // for(char c : checkParenthesis){
    //     if(c == '(' || c == '{' || c == '['){
    //         check.push(c);
    //     } else {
    //         if(check.empty()){
    //             isBalanced = false;
    //             break;
    //         }

    //         char top = check.top();
    //         if((top == '(' && c == ')') ||
    //         (top == '{' && c == '}') ||
    //         (top == '[' && c == ']')) {
    //             check.pop();
    //         } else {
    //             isBalanced = false;
    //             break;
    //         }
    //     }
    // }

    // if(isBalanced && check.empty()) cout << "Balanced" << endl;
    // else cout << "Unbalanced" << endl;

    // -----------------------------------------------------------------------------------------------------------------------------

    // Queue - Task 1
    // queue<string> names;
    // names.push("Gaurav");
    // names.push("Sharad");
    // names.push("Jay");
    // cout << "Front element: " << names.front() << endl;
    // cout << "Back element: " << names.back() << endl;
    // names.pop();
    // cout << "New front element: " << names.front() << endl;

    // // Task 2
    // int n = 5;
    // queue<int> q;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cout << "Enter number " << i+1 << ": ";
    //     cin >> x;
    //     q.push(x);
    // }
    // int size = q.size();
    // cout << "Size of queue: " << size << endl;
    // for(int i = 0; i < size; i++){
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;

    // // Task 3
    // queue<int> p;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cout << "Enter number " << i+1 << ": ";
    //     cin >> x;
    //     p.push(x);
    // }
    // stack<int> st;
    // int size2 = p.size();
    // for(int i = 0; i < size2; i++){
    //     st.push(p.front());
    //     p.pop();
    // }
    // for(int i = 0; i < size2; i++){
    //     p.push(st.top());
    //     st.pop();
    // }
    // for(int i = 0; i < size2; i++){
    //     cout << p.front() << " ";
    //     p.pop();
    // }
    // cout << endl;

    // // Task 4
    // queue<string> customers;
    // for(int i = 0; i < n; i++){
    //     string person;
    //     cout << "Enter the next person in line: ";
    //     getline(cin >> ws, person);
    //     customers.push(person);
    // }
    // int size3 = customers.size();
    // for(int i = 0; i < size3; i++){
    //     cout << "Served " << customers.front() << "!!" << endl;
    //     customers.pop();
    // }

    // Priority Queue
    // Task 1
    // priority_queue<int> pq;
    // for(int i = 0; i < 5; i++){
    //     int x;
    //     cout << "Enter a number: ";
    //     cin >> x;
    //     pq.push(x);
    // }
    // int size = pq.size();
    // for(int i = 0; i < size; i++){
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    // cout << endl;

    // // Task 2
    // priority_queue<int, vector<int>, greater<int>> mh;
    // for(int i = 0; i < 5; i++){
    //     int x;
    //     cout << "Enter a number: ";
    //     cin >> x;
    //     mh.push(x);
    // }
    // int size2 = mh.size();
    // for(int i = 0; i < size2; i++){
    //     cout << mh.top() << " ";
    //     mh.pop();
    // }
    // cout << endl;

    // // Task 3
    // string str;
    // map<char, int> freq;
    // priority_queue<pair<int, char>> pqr;
    // cout << "Enter the string: ";
    // getline(cin >> ws, str);
    // for(char c : str) freq[c]++;
    // for(auto pair : freq){
    //     pqr.push({pair.second, pair.first});
    // }
    // int newSize = pqr.size();
    // cout << "Char : Freq" << endl;
    // for(int i = 0; i < newSize; i++){
    //     cout << pqr.top().second << " : " << pqr.top().first << endl;
    //     pqr.pop();
    // }

    // ------------------------------------------------------------------------------------------------------------------------------

    // Maps - Task 1
    // map<string, int> nameScores;
    // nameScores["Naman"] = 95;
    // nameScores["Atul"] = 97;
    // nameScores["Tanish"] = 99;
    // nameScores["Dibyanshu"] = 100;

    // for(auto pair:nameScores) cout << pair.first << " : " << pair.second << endl;
    // cout << "Naman's scores: " << nameScores.at("Naman") << endl;
    // cout << "Atul's scores: " << nameScores["Atul"] << endl;
    // nameScores.erase("Dibyanshu");
    // for(auto pair:nameScores) cout << pair.first << " : " << pair.second << endl;

    // // Task 2
    // // string str;
    // // cout << "Enter the string: ";
    // // cin >> str;
    // // map<char, int> freq;
    // // for(char c:str) freq[c]++;
    // // for(auto pair:freq) cout << pair.first << " : " << pair.second << endl;

    // // Task 3
    // string str;
    // cout << "Enter the string: ";
    // cin >> str;
    // unordered_map<char, int> freq;
    // for(char c:str) freq[c]++;
    // for(auto pair:freq) cout << pair.first << " : " << pair.second << endl;

    // // Task 4
    // multimap<string, long> directory;
    
    // while(true){
    //     int num;
    //     cout << "Phone Directory Menu" << endl;
    //     cout << "1. Add new entry" << endl;
    //     cout << "2. Search an entry" << endl;
    //     cout << "3. Delete an entry" << endl;
    //     cout << "4. View all contacts" << endl;
    //     cout << "5. Exit" << endl;
    //     cout << "Enter a number: ";
    //     cin >> num;
    //     switch(num){
    //         case 1:
    //         {
    //             string name;
    //             long contact;
    //             cout << "Enter the name: ";
    //             getline(cin >> ws, name);
    //             cout << "Enter the contact number: ";
    //             cin >> contact;
    //             directory.insert({name, contact});
    //             cout << "Entry done successfully" << endl;
    //             break;
    //         }
    //         case 2:
    //         {
    //             string name;
    //             cout << "Enter the name: ";
    //             getline(cin >> ws, name);
    //             auto range = directory.equal_range(name);
    //             if(range.first == range.second){
    //                 cout << "No entry found in directory" << endl;
    //             } else {
    //                 cout << "All contacts for " << name << ":" << endl;
    //                 for(auto itr = range.first; itr != range.second; ++itr){
    //                     cout << itr->second << endl;
    //                 }
    //             }
    //             break;
    //         }
    //         case 3:
    //         {
    //             string name;
    //             cout << "Enter the name: ";
    //             getline(cin >> ws, name);
    //             int rows = directory.erase(name);
    //             cout << rows << " rows deleted";
    //             break;
    //         }
    //         case 4:
    //         {
    //             cout << "All Contacts" << endl;
    //             for(auto pair : directory){
    //                 cout << pair.first << " -> " << pair.second << endl;
    //             }
    //             break;
    //         }
    //         case 5:
    //         {
    //             exit(0);
    //         }
    //         default:
    //         {
    //             cout << "Please enter a number between 1 and 5";
    //         }
    //     }
    // }

    // ------------------------------------------------------------------------------------------------------------------------------

    // Set - Task 1
    // set<string> mySet;
    // string str;
    // cout << "Enter the string: ";
    // getline(cin >> ws, str);
    // stringstream ss(str);
    // string word;
    // while(ss >> word){
    //     mySet.insert(word);
    // }
    // for(auto word : mySet){
    //     cout << word << " ";
    // }
    // cout << endl;

    // // Task 2
    // set<int> numbers;
    // while(true){
    //     int num;
    //     cout << "Set Program" << endl;
    //     cout << "1. Insert number" << endl;
    //     cout << "2. Delete number" << endl;
    //     cout << "3. Check number if it exists" << endl;
    //     cout << "4. Print all numbers" << endl;
    //     cout << "5. Exit" << endl;
    //     cout << "Enter a number: ";
    //     cin >> num;
    //     switch(num){
    //         case 1:
    //         {
    //             int number;
    //             cout << "Enter the number: ";
    //             cin >> number;
    //             numbers.insert(number);
    //             cout << "Number added successfully" << endl;
    //             break;
    //         }
    //         case 2:
    //         {
    //             int number;
    //             cout << "Enter the number: ";
    //             cin >> number;
    //             numbers.erase(number);
    //             cout << "Number deleted successfully" << endl;
    //             break;
    //         }
    //         case 3:
    //         {
    //             int number;
    //             cout << "Enter the number: ";
    //             cin >> number;
    //             auto itr =numbers.find(number);
    //             if(itr != numbers.end()) cout << "The number exists in the set" << endl;
    //             else cout << "The number does not exist in the set" << endl;
    //             break;
    //         }
    //         case 4:
    //         {
    //             cout << "All numbers in the set: " << endl;
    //             for(auto num:numbers){
    //                 cout << num << endl;
    //             }
    //             break;
    //         }
    //         case 5:
    //             exit(0);
    //         default:
    //             cout << "Please enter nuber between 1 and 5";
    //     }
    // }

    // // Task 3
    // set<char> charSet;
    // string s;
    // cout << "Enter a string: ";
    // cin >> s;
    // for(char c:s) charSet.insert(c);
    // for(auto val:charSet) cout << val << " ";
    // cout << endl;

    // // Bonus
    // vector<int> arr1 = {1,2,3,4,5}, arr2 = {1,3,5,7,9};
    // set<int> mineSet(arr2.begin(), arr2.end());
    // cout << "Intersection: ";
    // for(int num:arr1){
    //     if(mineSet.find(num) != mineSet.end()){
    //         cout << num << " ";
    //     }
    // }
    // cout << endl;

    // cout << "Difference: ";
    // for(int num:arr1){
    //     if(mineSet.find(num) == mineSet.end()){
    //         cout << num << " ";
    //     }
    // }
    // cout << endl;

    // ------------------------------------------------------------------------------------------------------------------------------

    // Unordered Set - Task 1
    // string str;
    // unordered_set<char> mySet;
    // cout << "Enter the string: ";
    // getline(cin >> ws, str);
    // for(char c:str) mySet.insert(c);
    // for(char c:mySet) cout << c << " ";
    // cout << endl;

    // // Task 2
    // int n;
    // unordered_set<string> theSet;
    // cout << "Enter N: ";
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     string str;
    //     cout << "Enter word " << i+1 << ": ";
    //     cin >> str;
    //     theSet.insert(str);
    // }
    // string query;
    // cout << "Enter the query word: ";
    // cin >> query;
    // if(theSet.count(query)) cout << query << " exists in the set" << endl;
    // else cout << query << " does not exist in the set" << endl;

    // // Task 3
    // string s;
    // unordered_set<string> deDuplicate;
    // cout << "Enter the string: ";
    // getline(cin >> ws, s);
    // stringstream ss(s);
    // string word;
    // while(ss >> word){
    //     transform(word.begin(), word.end(), word.begin(), ::tolower);
    //     deDuplicate.insert(word);
    // }
    // for(string s:deDuplicate) cout << s << " ";
    // cout << endl;

    // // Bonus
    // vector<int> arr = {1,2,3,4,5,1,2,3};
    // unordered_set<int> intSet;
    // for(int num:arr){
    //     if(intSet.find(num) != intSet.end()) {
    //         cout << num << " is the first repeating number";
    //         break;
    //     }
    //     else intSet.insert(num);
    // }

    // -----------------------------------------------------------------------------------------------------------------------------

    // Multiset - Task 1
    // multiset<int> numbers;
    // int n;
    // cout << "Enter N: ";
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     int num;
    //     cout << "Enter number " << i+1 << ": ";
    //     cin >> num;
    //     numbers.insert(num);
    // }
    // for(int val:numbers) cout << val << " ";
    // cout << endl;
    // int del;
    // cout << "Enter the number to be deleted: ";
    // cin >> del;
    // numbers.erase(del);
    // for(int val:numbers) cout << val << " ";
    // cout << endl;

    // // Task 2
    // multiset<int> myMultiSet;
    // while(true){
    //     int num;
    //     cout << "Multi Set Program" << endl;
    //     cout << "1. Insert a number" << endl;
    //     cout << "2. Delete one occurence of a number" << endl;
    //     cout << "3. Check count of a number" << endl;
    //     cout << "4. View all numbers" << endl;
    //     cout << "5. Exit" << endl;
    //     cout << "Enter the choice: ";
    //     cin >> num;
    //     switch(num){
    //         case 1:
    //         {
    //             int num;
    //             cout << "Enter a number: ";
    //             cin >> num;
    //             myMultiSet.insert(num);
    //             cout << "Number inserted successfully" << endl;
    //             break;
    //         }
    //         case 2:
    //         {
    //             int num;
    //             cout << "Enter a number: ";
    //             cin >> num;
    //             if(myMultiSet.find(num) != myMultiSet.end()){
    //                 myMultiSet.erase(myMultiSet.find(num));
    //                 cout << "One occurence deleted of " << num << endl;
    //             }
    //             else cout << "No occurence of the provided number " << num << endl;
    //             break;
    //         }
    //         case 3:
    //         {
    //             int num;
    //             cout << "Enter a number: ";
    //             cin >> num;
    //             int numCount = myMultiSet.count(num);
    //             cout << numCount << " occurences are there in the multiset of number " << num << endl;
    //             break;
    //         }
    //         case 4:
    //         {
    //             for(int val:myMultiSet) cout << val << " ";
    //             cout << endl;
    //             break;
    //         }
    //         case 5:
    //             exit(0);
    //         default:
    //             cout << "Please enter number between 1 and 5" << endl;
    //     }
    // }

    // // Task 3
    // multiset<string> words;
    // set<string> uniqueWords;
    // string sentence;
    // cout << "Enter the sentence: ";
    // getline(cin >> ws, sentence);
    // stringstream ss(sentence);
    // string word;
    // while(ss >> word){
    //     words.insert(word);
    //     uniqueWords.insert(word);
    // }
    // for(string word:uniqueWords){
    //     int wordFreq = words.count(word);
    //     cout << word << " -> " << wordFreq << endl;
    // }

    // // Bonus Task
    // vector<int> arr = {1,1,2,2,2,3,3,3,4,4,4,4};
    // map<int, int> freqCount;
    // for(int val:arr) freqCount[val]++;
    // multiset<pair<int, int>> sortFreq;
    // for(auto pair:freqCount) sortFreq.insert({pair.second, pair.first});
    // int prevFreq = -1;
    // int freqLevels = 0;
    // for(auto rit = sortFreq.rbegin(); rit != sortFreq.rend(); ++rit){
    //     int freq = rit->first;
    //     int num = rit->second;
    //     if (freq != prevFreq) {
    //         freqLevels++;
    //         if (freqLevels > 2) break;
    //         prevFreq = freq;
    //     }
    //     cout << freq << " -> " << num << endl;
    // }

    // ------------------------------------------------------------------------------------------------------------------------------

    // Pairs and Tuples - Task 1
    // pair<string, int> myPair = {"one", 1};
    // cout << "First: " << myPair.first << endl;
    // cout << "Second: " << myPair.second << endl;

    // // Task 2
    // vector<pair<string, int>> myVector = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}};
    // for(const auto& pair:myVector) cout << "First: " << pair.first << ", Second: " << pair.second << endl;

    // // Task 3
    // sort(myVector.begin(), myVector.end());
    // for(const auto& pair:myVector) cout << "First: " << pair.first << ", Second: " << pair.second << endl;

    // // Task 4
    // pair<string, pair<int, float>> anotherPair = {"first", {1, 0.99}};
    // cout << "First: " << anotherPair.first << ", Second: {" << anotherPair.second.first << ", " << anotherPair.second.second << "}" << endl; 

    // // Bonus Task
    // tuple<string, int, float> myTuple = {"first", 1, 0.99};
    // cout << get<0>(myTuple) << endl;
    // cout << get<1>(myTuple) << endl;
    // cout << get<2>(myTuple) << endl;

    // string str;
    // int num;
    // float number;
    // tie(str, num, number) = myTuple;
    // cout << str << " " << num << " " << number << endl;

    // -------------------------------------------------------------------------------------------------------------------------------

    // Iterators - Task 1
    // vector<int> vec = {10,20,30,40,50};
    // for(auto itr = vec.begin(); itr != vec.end(); ++itr){
    //     cout << *itr << " ";
    // }
    // cout << endl;

    // // Task 2
    // set<string> names = {"Naman", "Harsh", "Atul", "Tanish"};
    // // Prints the reverse of sorted order
    // for(auto itr = names.rbegin(); itr != names.rend(); ++itr){
    //     cout << *itr << " ";
    // }
    // cout << endl;

    // // Task 3
    // map<string, int> rel = {{"A", 1}, {"B", 2}, {"C", 3}};
    // for(auto itr = rel.begin(); itr != rel.end(); ++itr){
    //     cout << "Key: " << itr->first << ", Value: " << itr->second << endl;
    // }

    // // Task 4
    // set<int> num = {5,10,15,20,25};
    // for(auto itr = num.begin(); itr != num.end(); ++itr){
    //     cout << *itr << " ";
    // }
    // cout << endl;
    // auto it = num.find(15);
    // if(it != num.end()) num.erase(it);
    // for(auto itr = num.begin(); itr != num.end(); ++itr){
    //     cout << *itr << " ";
    // }
    // cout << endl;

    // // Task 5
    // vector<int> arr = {1,2,3,4,5};
    // for(auto itr = arr.begin(); itr != arr.end(); ++itr){
    //     *itr *= 2;
    //     cout << *itr << " ";
    // }
    // cout << endl;

    // ------------------------------------------------------------------------------------------------------------------------------

    // Algorithm - Task 1
    // vector<int> arr(7);
    // cout << " Enter the elements: ";
    // for(int i = 0; i < 7; i++){
    //     cin >> arr[i];
    // }
    // sort(arr.begin(), arr.end());
    // cout << "Sorted elements: ";
    // for(int val:arr) cout << val << " ";
    // cout << endl;

    // int num;
    // cout << "Enter the number to search: ";
    // cin >> num;
    // auto itr = find(arr.begin(), arr.end(), num);
    // if(itr != arr.end()) cout << "Index of " << num << " is: " << distance(arr.begin(), itr) << endl;
    // else cout << "The number does not exist in the container" << endl;

    // bool flag = binary_search(arr.begin(), arr.end(), 15);
    // if(flag) cout << "The number exists" << endl;
    // else cout << "The number does not exist" << endl;

    // // Task 2
    // int countFive = count(arr.begin(), arr.end(), 5);
    // cout << "Count of 5: " << countFive << endl;
    // int sum = accumulate(arr.begin(), arr.end(), 0);
    // cout << "Sum of vector elements: " << sum << endl;

    // // Task 3
    // auto max = max_element(arr.begin(), arr.end());
    // cout << "Max element: " << *max << endl;
    // auto min = min_element(arr.begin(), arr.end());
    // cout << "Min element: " << *min << endl;
    // reverse(arr.begin(), arr.end());
    // for(int val:arr) cout << val << " ";
    // cout << endl;

    // // Bonus Task
    // vector<string> words;
    // string sentence;
    // cout << "Enter the sentence: ";
    // getline(cin >> ws, sentence);
    // stringstream ss(sentence);
    // string word;
    // while(ss >> word){
    //     words.push_back(word);
    // }
    // int countA = count(words.begin(), words.end(), "the");
    // cout << "Count of word 'the' in the sentence is: " << countA << endl;
    // auto it = find(words.begin(), words.end(), "the");
    // if(it != words.end()) cout << "The word 'the' exists in the sentence." << endl;
    // else cout << "The word 'the' does not exist in the sentence." << endl;

    // -------------------------------------------------------------------------------------------------------------------------------

    // Custom Comparators - Task 1
    // int n;
    // cout << "Enter N: ";
    // cin >> n;
    // vector<int> numbers(n);
    // for(int i = 0; i < n; i++) cin >> numbers[i];
    // sort(numbers.begin(), numbers.end(), [](const int& a, const int& b){
    //     return a > b;
    // });
    // for(int val:numbers) cout << val << " ";
    // cout << endl;

    // // Task 2
    // vector<pair<string, int>> players = {{"Naman", 50}, {"Tanish", 90}, {"Atul", 75}, {"Dibyanshu", 50}};
    // sort(players.begin(), players.end(), [](const auto& a, const auto& b){
    //     if(a.second == b.second) return a.first < b.first;
    //     return a.second > b.second;
    // });
    // for(auto pair:players) cout << "Player: " << pair.first << ", Score: " << pair.second << endl;

    // // Task 3
    // struct Product{
    //     string name;
    //     double price;
    //     double rating;
    // };
    // Product p1 = {"PS5", 35000.05, 5};
    // Product p2 = {"PS4", 32000.05, 5};
    // Product p3 = {"XBOX", 30000.05, 4.7};
    // Product p4 = {"PS3", 32000.05, 5};
    // vector<Product> products = {p1, p2, p3, p4};
    // sort(products.begin(), products.end(), [](const auto& a, const auto& b){
    //     if(a.rating == b.rating && a.price == b.price) return a.name < b.name;
    //     else if(a.rating == b.rating) return a.price < b.price;
    //     return a.rating > b.rating;
    // });
    // for(const auto& pair:products) cout << "Product: " << pair.name << ", Price: " << pair.price << ", Rating: " << pair.rating << endl;

    // // Bonus Task
    // vector<int> num = {4, 5, 6, 5, 4, 3};
    // map<int, int> freq;
    // for(int n:num) freq[n]++;
    // vector<pair<int, int>> numPair(freq.begin(), freq.end());
    // // for(auto pair:freq) numPair.push_back(pair);
    // sort(numPair.begin(), numPair.end(), [](const auto& a, const auto& b){
    //     if(a.second == b.second) return a.first < b.first;
    //     return a.second > b.second;
    // });
    // // for(auto pair:numPair) cout << "Number: " << pair.first << ", Frequency: " << pair.second << endl;
    // num.clear();
    // for(auto pair:numPair) num.insert(num.end(), pair.second, pair.first);
    // for(int n:num) cout << n << " ";
    // cout << endl;

    // --------------------------------------------------------------------------------------------------------------------------------

    // Lambda Functions - Task 1
    // auto multiply = [](int a, int b) {
    //     return a*b;
    // };
    // cout << multiply(5, 4) << endl;

    // // Task 2
    // int multiplier = 5;
    // auto multiplyCapture = [multiplier](int multiplicand){
    //     return multiplier * multiplicand;
    // };
    // cout << multiplyCapture(7) << endl;

    // // Task 3
    // vector<int> nums = {1,2,3,4,5,6,7,8};
    // for_each(nums.begin(), nums.end(), [](const int& num){
    //     cout << num*num << " ";
    // });
    // cout << endl;

    // // Tsak 4
    // vector<string> words = {"game", "ai", "developer", "fun"};
    // sort(words.begin(),words.end(), [](const string& a, const string& b){
    //     return a.size() < b.size();
    // });
    // for_each(words.begin(), words.end(), [](const string& word){
    //     cout << word << " ";
    // });
    // cout << endl;

    // // Bonus Task
    // vector<int> numbers = {1,2,3,4,5,6,7,8,9,10};
    // int count = 0;
    // for_each(numbers.begin(), numbers.end(), [&count](const int& num){
    //     if(!(num%2)) count++;
    // });
    // cout << "Even count: " << count << endl;

    // ------------------------------------------------------------------------------------------------------------------------------

    // Bitset - Task 1
    string bitInput;
    cout << "Enter bit input: ";
    cin >> bitInput;
    bitset<8> b(bitInput);
    cout << "Number of set bits: " << b.count() << endl;
    cout << "Bit at position 2: " << b.test(2) << endl;
    unsigned long number = b.to_ulong();
    cout << "Decimal value: " << number << endl;

    // Task 2
    cout << "3rd bit before: " << b.test(3) << endl;
    b.flip(3);
    cout << "3rd bit after: " << b.test(3) << endl;

    // Task 3
    int num;
    cout << "Enter number between 0 and 255: ";
    cin >> num;
    bitset<8> bits(num);
    cout << "Entire string: " << bits.to_string() << endl;
    bits.set(0);
    cout << "After setting 0th bit: " << bits.to_string() << endl;
    bits.reset(1);
    cout << "After resetting 1st bit: " << bits.to_string() << endl;
    bits.flip(2);
    cout << "After flipping 2nd bit: " << bits.to_string() << endl;

    // Bonus Task
    auto printResults = [](bitset<8> b1, bitset<8> b2){
        bitset<8> andResult = b1 & b2;
        bitset<8> orResult = b1 | b2;
        bitset<8> xorResult = b1 ^ b2;
        cout << "AND Result: " << andResult.to_string() << endl;
        cout << "OR Result: " << orResult.to_string() << endl;
        cout << "XOR Result: " << xorResult.to_string() << endl;
    };

    bitset<8> b1("10101010");
    bitset<8> b2("11001100");
    printResults(b1, b2);

    return 0;
}