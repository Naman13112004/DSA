#include<bits/stdc++.h>
using namespace std;

int multiples_of_six(){
    int count = 0;
    long long ans = 0;
    for(int i = 1; i < 100; i++){
        ans = pow(5,i) + pow(8,i+1) + pow(13,i+2);
        cout << ans << "\n";
        if(ans % 6 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int count = multiples_of_six();
    cout << count;
    return 0;
}