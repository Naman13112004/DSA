#include<iostream>
using namespace std;

int main(){
    int arr[5],newArr[5];

    cout << "Array is: ";
    for(int i = 0; i<5; i++){
        arr[i] = i+1;
        cout << arr[i] << " ";
        newArr[((i+1)%5)] = arr[i];
    }

    cout << "\nNew array is: ";
    for(int i = 0; i<5; i++){
        cout << newArr[i] << " ";
    }
    return 0;
}