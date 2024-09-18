#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int M, N, X, Y;

    cin >> M >> N >> X >> Y;

    double dx = X - M;
    double dy = Y - N;
    double radiusSquared = dx * dx + dy * dy;
    double radius = sqrt(radiusSquared);

    const double PI = 3.14;
    double area = PI * radiusSquared;

    cout << fixed << setprecision(2) << area << endl;

    return 0;
}
