/*#include <iostream>
#include <cmath>
// header for math operations

int main(){
    double n;
    // the name of the variable doesn't matter
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << std::abs(n) << std::endl;
}*/

/*#include <iostream>

// we define a new function called myabs
// in the first line we specify that
// the function has an input parameter 
// of type double (double in)
// (in is not a special name)
// and returns a value of type double
// (hence *double* myabs etc)

double myabs(double in){

    double abs; // not a special name, just a name

    if(in < 0){ // if the number is negative...

        // ...then the result is the number
        // with a switched sign
        abs = -in;
    }
    else{ // otherwise...

        // ...the result is the same number
        abs = in;
    }

    // the function returns the result
    return abs;

}

// the main is almost the same

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    //                                ^ except here we call myabs (not std::abs)
}*/

/*#include <iostream>

// function *declaration*
//double myabs(double);

// function *definition*
double myabs(double in){
    double abs;

    if(in < 0){ 
        abs = -in;
    }
    else{
        abs = in;
    }

    return abs;
}

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    // function myabs is called here                        
}*/

/*#include <iostream>
#include <cmath>

int main(){
    std::cout << "2^3: " << std::pow(2, 3) << std::endl;
    std::cout << "0.5^2: " << std::pow(0.5, 2) << std::endl;
    std::cout << "1^0: " << std::pow(1, 0) << std::endl;
    std::cout << "4^0.5: " << std::pow(4, 0.5) << std::endl;
    std::cout << "4^(-0.5): " << std::pow(4, -0.5) << std::endl; 
}*/

/*#include <iostream>
#include <cmath>

int main(){
    double base, power;
    std::cout << "Type in a base: ";
    std::cin >> base;
    std::cout << "Type in a power: ";
    std::cin >> power;
    std::cout << std::pow(base, power);
}*/

/*#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    if(exp < 0){
        base = 1 / base;
        exp = -exp;
    }
    for(int i=0; i< exp; i++){
        result = result * base;
    }
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, -3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, -2) << std::endl;
    std::cout << "1^0: " << mypow(1, -0) << std::endl;
}*/

/*#include <iostream>

int myfactorial(int in){
// in is not a special name
// just a name

    int fact = 1;
    // variable that will store the result
    for(int i=in; i > 0; i--){
        fact = fact * i;
    }
    // TODO: compute the factorial of in
    // so that the result is stored in variable fact


    return fact;
    // return the result
    // we *do not print* anything in the function
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}*/

/*#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                ly = true;
            }
            else{
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }
    else{
        ly = false;
    }
    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

int main(){*/

    /*int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    // a function returning a bool 
    // can be used directly in the condition
    // of an if statement 

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }*/
    /*std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
    std::cout << (leap_year(2400) == true) << std::endl;
    std::cout << (leap_year(2500) == false) << std::endl;
    std::cout << (leap_year(2600) == false) << std::endl;
    std::cout << (leap_year(2700) == false) << std::endl;
    std::cout << (leap_year(2800) == true) << std::endl;
    std::cout << (leap_year(2900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;
}*/

/*#include <iostream>

double comparator(double num1, double num2){
    if(num1 >= num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int numb1, numb2;
    std::cout << "Number 1: ";
    std::cin >> numb1;
    std::cout << "Number 2: ";
    std::cin >> numb2;
    std::cout << comparator(numb1, numb2);
}*/

#include <iostream>

double comparator(double num1, double num2, double num3){
    if(num1 >= num2){
        if(num1 >= num3){
            return num1;
        }
        else{
            return num3;
        }
    }
    else{
        if(num2 >= num3){
            return num2;
        }
        else{
            return num3;
        }
    }
}

int main(){
    int numb1, numb2, numb3;
    std::cout << "Number 1: ";
    std::cin >> numb1;
    std::cout << "Number 2: ";
    std::cin >> numb2;
    std::cout << "Number 3: ";
    std::cin >> numb3;
    std::cout << comparator(numb1, numb2, numb3);
}