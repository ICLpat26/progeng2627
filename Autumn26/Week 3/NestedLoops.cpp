#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for(int i = 1; i < n + 1; i++){
        for(int i2 = 1; i2 < n + 1; i2++){
            std::cout << i * i2 << "\t";
        }
        std::cout << std::endl;
    }
}