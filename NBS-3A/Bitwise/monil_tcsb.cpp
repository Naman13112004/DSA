#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i = 0 ; i<n ; i++)

int tcsb(int n) { // log(n)
    int tcsb = 0;

    for(int i = 1; i <= n; i++){ // O(n) * log(n) = O(nlog(n))
        int j = i;    
        while(j) { // log(n)
            if(j&1){
                tcsb++;
            } 
            j >>= 1;
        }
    }
    return tcsb;
    // cout << "Total setbits : " << tcsb << "\n";
}

int main(void) {
    int number;
    cout << "Enter a Range : ";
    cin >> number;
    forn(i,number) {
        cout<<(i+1)<<": "<<tcsb(i+1)<<"\n";
    }
}