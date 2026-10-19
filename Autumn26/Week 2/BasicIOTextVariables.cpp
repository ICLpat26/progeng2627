/*#include <iostream>
#include <string>

// includes the header iostream
// (input and output stream)
// headers are often needed in addition
// to the core language
// in this case the header is needed
// in order to perform input and output

int main(){
// begins a function called main
// functions will be covered later on
// for now we always include our instructions 
// into something beginning with int main(){
    std::string user_name;
    std::cout << "hello" << std::endl;
    std::cin >> user_name;
    std::cout << "goodbye " << user_name;

    // performs the actual printing
    // read it right to left:
    // the text "hello"
    // is printed (<<)
    // on std::cout

    // cout stands for console output
    // and it represents the screen
    // (std stands for standard,
    // we will see later on why)

    // note that the text needs to be
    // enclosed in quotes (")

    // note the ; at the end
    // C++ instructions end with a ;

}
// this curly brace ends function main

#include <iostream>

int main(){
  std::cout << "hello";
}*/

#include <iostream>
#include <string>
// this includes the header for text variables

int main(){

    std::string user_name;
    
    // TODO: add another declaration
    // for a text variable called user_surname
    std::string user_surname;
    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;

    // TODO: add another printing instruction 
    // asking for the surname
    std::cout << "what is your surname?" << std::endl;
    // TODO: read the surname from the user
    // and store it in variable user_surname
    std::cin >> user_surname;
    // TODO: add a printing instruction 
    // that says hello followed by the
    // name and surname of the user
    std::cout << "hello " << user_name << " " << user_surname;
}