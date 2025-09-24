#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

// struct Enemy{
//     float x,y;
// };

int main() {
    // 🕓 Start timer
    auto start = high_resolution_clock::now();

    // 🔁 Sample work (e.g., updating positions)
    // OOP Version
    // vector<Enemy> enemies(100000);
    // for(int frame = 0; frame < 100; frame++){
    //     for(auto& e: enemies){
    //         e.x += 1.0f;
    //         e.y += 1.0f;
    //     }
    // }

    // DOD Version
    float x[100000] = {};
    float y[100000] = {};

    for(int frame = 0; frame < 100; frame++){
        for(int i = 0; i < 100000; i++){
            x[i] += 1.0f;
            y[i] += 1.0f;
        }
    }

    // 🕓 Stop timer
    auto stop = high_resolution_clock::now();

    // ⏱️ Calculate duration
    auto duration = duration_cast<milliseconds>(stop - start);

    // 🧾 Print result
    cout << "Time taken: " << duration.count()/100.0 << " ms" << endl;

    return 0;
}
