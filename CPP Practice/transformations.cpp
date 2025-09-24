#include<iostream>
#include<cmath>
using namespace std;

typedef pair<double, double> pdd;

class Transform2D{
    public:
        // Function to translate a point by a given offset
        pdd translate(double x, double y, double dx, double dy){
            return {x+dx, y+dy};
        }

        // Function to scale a point by a given scale factor
        pdd scale(double x, double y, double sx, double sy){
            return {x*sx, y*sy};
        }

        // Function to rotate a point by given angle in degrees ( around origin )
        pdd rotate(double x, double y, double angleInDegrees){
            double rad = angleInDegrees * (M_PI / 180);
            double newX = (x * cos(rad)) - (y * sin(rad));
            double newY = (x * sin(rad)) + (y * cos(rad));
            return {newX, newY};
        }

        // Function to rotate a point around a pivot (custom) point 
        pdd rotateAroundPivot(double x, double y, double cx, double cy, double angleInDegrees){
            double rad = angleInDegrees * (M_PI / 180);

            double translatedX = x - cx;
            double translatedY = y - cy;

            double newX = (translatedX * cos(rad)) - (translatedY * sin(rad));
            double newY = (translatedX * sin(rad)) + (translatedY * cos(rad));

            double finalX = newX + cx;
            double finalY = newY + cy;

            return {finalX, finalY};
        }

        // Function to perform chain transformation - translate then scale then rotate
        pdd transform(double x, double y, double dx, double dy, double sx, double sy, double angleInDegrees){
            pdd translatedPoints = translate(x, y, dx, dy);
            cout << "Translated Points: "; printPoint(translatedPoints.first, translatedPoints.second);
            pdd scaledPoints = scale(translatedPoints.first, translatedPoints.second, sx, sy);
            cout << "Scaled Points: "; printPoint(scaledPoints.first, scaledPoints.second);
            pdd rotatedPoints = rotate(scaledPoints.first, scaledPoints.second, angleInDegrees);
            cout << "Rotated Points: "; printPoint(rotatedPoints.first, rotatedPoints.second);

            return rotatedPoints;
        }

        // Function to print the point coordinates
        void printPoint(double x, double y){
            cout << "(x,y) : (" << x << "," << y << ")\n";
        }
};

int main(){
    double x = 2, y = 3, dx = 3, dy = -2, sx = 2, sy = 0.5, cx = 2, cy = 2;
    double deg = 90;

    Transform2D t;
    // pdd M = t.translate(x, y, dx, dy);
    // pdd N = t.scale(x, y, sx, sy);
    // pdd O = t.rotate(x, y, deg);

    // t.printPoint(M.first, M.second);
    // t.printPoint(N.first, N.second);
    // t.printPoint(O.first, O.second);

    // t.transform(x, y, dx, dy, sx, sy, deg);

    pdd M = t.rotateAroundPivot(x, y, cx, cy, deg);
    t.printPoint(M.first, M.second);

    return 0;
}