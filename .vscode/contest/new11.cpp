#include <iostream>
#include <cmath>

int main() {
    int x;
    int y;
    std::cin >> x >> y;
    int z = std::pow(x, y);
    if(z % 2 == 0){
        std::cout << "Even" << std::endl;
    }
    else{
        std::cout << "Odd" << std::endl;
    }
    return 0;
}