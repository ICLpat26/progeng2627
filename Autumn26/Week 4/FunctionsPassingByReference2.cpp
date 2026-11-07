/*#include <iostream>
#include <cmath>
// for the square root

bool quadsolve(double a, double b, double c, double& x1, double& x2){

    bool realsol;
    double delta = b*b - 4 * a * c;

    if(delta < 0){
        realsol = false;
    }
    else{

        realsol = true;
        x1 = (-b + std::sqrt(delta)) / (2 * a);
        x2 = (-b - std::sqrt(delta)) / (2 * a);

        // function sqrt computes the square root
        // more legible and sometimes more efficient
        // than using e.g. std::pow(delta, 0.5)

    }

    return realsol;
}

int main(){

    double a, b, c;
    // it is just a coincidence that these variables are named
    // like the function parameters, they could have a different name

    std::cout << "this program finds the real solutions" << std::endl;
    std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
    std::cout << "please enter the coefficients a, b, c:" << std::endl;

    std::cin >> a >> b >> c;

    double s1, s2;
    // we pass these variables uninitialised to the function
    // because the values will be provided in output 
    // by the function

    if(quadsolve(a, b, c, s1, s2)){
        std::cout << "the solutions are:" << std::endl;
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "there are no real solutions" << std::endl;
    }

}*/

/*#include <iostream>

double area(double a, double b){
    double area = a * b;
    return area;
}

double perimeter(double a, double b){
    double perimeter = 2*a + 2*b;
    return perimeter;
}

int main(){
    double length, width;
    std::cout << "Enter the side lengths of a rectangle: ";
    std::cin >> length >> width;
    std::cout << "Area: " << area(length, width) << std::endl;
    std::cout << "Perimeter: " << perimeter(length, width);
}*/

/*#include <iostream>

int division(int a, int b){
    int division = a / b;
    return division;
}

int remainder(int a, int b){
    int remainder;
    remainder = a % b;
    return remainder;
}

int main(){
    int num1, num2;
    std::cout << "Type two integers to find the division and remainder value: ";
    std::cin >> num1 >> num2;
    std::cout << "Division value: " << division(num1, num2) << std::endl;
    std::cout << "Remainder: " << remainder(num1, num2);
}*/

#include <iostream>

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
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;
    if(m1 == 2){
        if(d1 == 28){
            if(leap_year(y1) == false){
                d2 = 1;
                m2 += 1;
            }
        }
    }
    else if((m1 == 2) || (m1 == 4) || (m1 == 6) || (m1 == 9) || (m1 == 11)){
        if(d1 == 30){
            m2 += 1;
            d2 = 1;
        }
    }
    else{
        if(d1 == 31){
            if(m1 == 12){
                m2 = 1;
                y2 += 1;
            }
            else{
                m2 += 1;
            }
            d2 = 1;
        }
    }
    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){
    int da1, mo1, ye1, da2, mo2, ye2;
    std::cout << "Enter a date: ";
    std::cin >> da1 >> mo1 >> ye1;
    next_date(da1, mo1, ye1, da2, mo2, ye2);
    std::cout << da2 << " " << mo2 << " " << ye2;
    // TODO: write a main to test the function
}