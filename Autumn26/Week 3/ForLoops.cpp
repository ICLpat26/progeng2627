/*#include <iostream>

int main(){
    int x, n, output = 1;
    std::cout << "Enter a base: ";
    std::cin >> x;
    std::cout << "Enter the power: ";
    std::cin >> n;
    for(; n > 0; n--){
        output = output * x;
    }
    std::cout << output;
}*/

#include <iostream>

int main(){
    int n, output = 1;
    std::cout << "Enter the number: ";
    std::cin >> n;
    for(; n > 0; n--){
        output = output * n;
    }
    std::cout << output;
}