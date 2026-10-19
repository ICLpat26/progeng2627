#include <iostream>

int main(){
    __int64 number, count = 0;
    std::cout << "Number to test for Collatz Conjecture: ";
    std::cin >> number;
    while(number != 1){
        if(number % 2 == 0){
            number = number / 2;
        }
        else{
            number = 3 * number + 1;
        }
        count++;
        std::cout << number << " ";
    }
    std::cout << std::endl << count << " steps";
}