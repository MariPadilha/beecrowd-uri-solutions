#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double x1, x2, y1, y2, t, r;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    t = pow((x2 - x1),2) + pow((y2 - y1),2);
    r = sqrt(t);
    cout << fixed << setprecision(4);
    cout << r << endl;
}
