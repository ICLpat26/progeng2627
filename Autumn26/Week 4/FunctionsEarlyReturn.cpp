/*#include <iostream>

int f(){
    std::cout << "this is function f" << std::endl;
    return 1;
    std::cout << "printing after the first return statement" << std::endl;
    return 2;
    std::cout << "printing after the second return statement" << std::endl;
}

int main(){
    int n = 0;
    n = f();
    std::cout << "n is: " << n << std::endl; 
}*/

/*#include <iostream>

bool even_or_odd(int n){

    bool out; 

    if( (n % 2) == 0){
        out = true;
    }
    else{
        out = false;
    }

    return out;
}


bool even_or_odd_two_ret(int n){

    if( (n % 2) == 0){
        return true;
    }
    else{
        return false;
    }
}

bool even_or_odd_two_ret_wrong(int n){

    if( (n % 2) == 0){
        return true;
    }
    // undefined behaviour if input is odd number
}

bool even_or_odd_wrong(int n){

    bool out;

    if( (n % 2) == 0){
        out = true;
    }
    else{
        out = false;
    }

    // undefined behaviour
}

int main(){

    std::cout << even_or_odd(2) << std::endl;
    std::cout << even_or_odd(3) << std::endl;

    std::cout << even_or_odd_two_ret(2) << std::endl;
    std::cout << even_or_odd_two_ret(3) << std::endl;

    std::cout << even_or_odd_two_ret_wrong(2) << std::endl;
    std::cout << even_or_odd_two_ret_wrong(3) << std::endl;

    std::cout << even_or_odd_wrong(2) << std::endl;
    std::cout << even_or_odd_wrong(3) << std::endl;
}*/

/*#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if((n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int num;
    std::cout << "Insert a number to find its smallest prime factor: ";
    std::cin >> num;
    std::cout << "Smallest factor: " << smallest_factor(num);
}*/

#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if((n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int num1, num2;
    std::cout << "Insert two numbers to find the prime factors between them: ";
    std::cin >> num1 >> num2;
    for(int numX = num1; numX <= num2; numX++){
        if(smallest_factor(numX) == 0){
            std::cout << numX << std::endl;
        }
    }
}