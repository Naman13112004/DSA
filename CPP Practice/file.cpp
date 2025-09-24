#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string filename = "scores.txt";

    // Taking name and score as input - 1
    string name;
    int score;
    cout << "Enter the name: ";
    getline(cin >> ws, name);
    cout << "Enter the score: ";
    cin >> score;

    // Appending to file - 2
    ofstream outFile(filename, ios::app);

    if(outFile.is_open()){
        outFile << name << " " << score << "\n";
        outFile.close();
        cout << "Data written to file successfully.\n";
    }else{
        cout << "Error occured while opening the file";
    }

    // Reading from the file - 3
    ifstream inFile(filename);
    string line;

    if(inFile.is_open()){
        while(getline(inFile, line)){
            cout << line << "\n";
            cout << "----------------------\n";
        }
        inFile.close();
    }else{
        cout << "Error while opening the file";
    }

    return 0;
}