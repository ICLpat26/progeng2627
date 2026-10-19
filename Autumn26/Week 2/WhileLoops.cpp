/*#include <iostream>
int main(){
    int n, counter = 0;
    std::cin >> n;
    while(counter < n){
        std::cout << "hello" << std::endl;
        counter = counter + 1;
    }
}*/

/*#include <iostream>
int main(){
    while(true){
        int x, acc = 0, n, counter = 0;
        std::cin >> x >> n;
        while(counter < n){
            acc = acc + x;
            counter = counter + 1;
        }
        std::cout << acc << std::endl;
    }
}*/

/*#include <iostream>
#include <string>
int main(){
    std::string word;
    std::cin >> word;
    while((word != "stop") && (word != "Stop") && (word != "STOP")){
        std::cout << word << std::endl;
        std::cin >> word;
    }
}*/

/*#include <iostream>
int main(){
    double number, total = 0, average;
    int count = 0;
    while(true){
        std::cout << "Enter a number: ";
        std::cin >> number;
        total = total + number;
        count = count + 1;
        average = total / count;
        std::cout << "The average so far is " << average << std::endl;
    }
}*/

#include <iostream>
int main(){
    int count = 0, number, divisor;
    std::cin >> number >> divisor;
    int temp = number;
    while(divisor <= temp){
        temp = temp - divisor;
        count = count + 1;
    }
    std::cout << "Divided " << count << " times, remainder " << temp;
}