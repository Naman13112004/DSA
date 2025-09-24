#include<iostream>
#include<cmath>
using namespace std;

typedef pair<double, double> Vector2D;

struct gameMath {
    // Function to add two vectors
    Vector2D add(double x1, double y1, double x2, double y2){
        return {x1+x2, y1+y2};
    }

    // Function to subtract two vectors
    Vector2D subtract(double x1, double y1, double x2, double y2){
        return {x1-x2, y1-y2};
    }

    // Function to get magnitude(length) of a vector
    double getMagnitude(double x, double y){
        double z = (x*x) + (y*y);
        return sqrt(z);
    }

    // Function to convert into unit vector(normalize it)
    Vector2D normalize(double x, double y){
        double mag = getMagnitude(x,y);
        if(mag == 0) return {0, 0};
        return {x/mag, y/mag};
    }

    // Function to print the vector in readable format
    void printVector(double x, double y){
        cout << "(" << x << ", " << y << ")\n";
    }
};

int main(){
    int x[5] = {1,2,3,4,5}, y[5] = {2,4,6,8,10};
    pair<int, int> A = {x[3], y[3]};
    pair<int, int> B = {x[0], y[0]};
    gameMath gm;

    Vector2D M = gm.add(A.first, A.second, B.first, B.second);
    Vector2D N = gm.subtract(A.first, A.second, B.first, B.second);
    double magnitude = gm.getMagnitude(A.first, A.second);
    Vector2D Norm = gm.normalize(B.first, B.second);
    
    cout << "Vector Addition: ";
    gm.printVector(M.first, M.second);

    cout << "Vector Subtraction: ";
    gm.printVector(N.first, N.second);

    cout << "Magnitude: " << magnitude << "\n";

    cout << "Normalized Vector: ";
    gm.printVector(Norm.first, Norm.second);

    return 0;
}