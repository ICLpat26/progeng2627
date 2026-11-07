/*#include <iostream>
#include <fstream>
// header fstream needed for working with text files

int main(){
    std::ifstream infile; 
    // we declare the object that will represent the text file
    // of type std::ifstream (infile is not a special name)

    infile.open("input.txt");
    // we associate the object called infile
    // to the text file called input.txt

    // now before we go any further it's important to check
    // whether the operation opening the file really worked
    // (if for example we misspell the name then the program
    // doesn't work and we don't know why

    // please note that difference between function open (above)
    // and function is_open (below)

    if(infile.is_open()){ 
        // if the operation was successful
        // we can read the content of the file
        // this is done in a remarkably 
        // similar way to using std::cin

        int tmp;

        infile >> tmp;
        std::cout << tmp << std::endl; 
        // this will read and then print 
        // the first number in the file
        // (which in the example above is 10)

        infile >> tmp;
        std::cout << tmp << std::endl;
        // this will read and then print 
        // the second number in the file
        // (which in the example above is 4)

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile.close(); 
        // we close the file when we are done

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

}*/

/*#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    if(infile.is_open()){ 
        int tmp, total = 0;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in tmp 
        // and what is returned
        // evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            total += tmp;
        }

        infile.close(); 
        std::cout << total;
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}*/

/*#include <iostream>
#include <fstream>
#include <cstdlib>
// cstdlib header needed for EXIT_FAILURE
#include <string>

int main(){
    std::string file;
    std::cin >> file;
    std::ifstream infile; 
    infile.open(file + ".txt");

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }

    // if the return is executed above (because the program enters the if)
    // then the following lines are not executed

    // the following lines are the same as in the corresponding example above

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    for (int i = size(v) - 1; i > -1; i--){
        std::cout << v[i] << std::endl;
    }
    
    // TODO: print the content of v in reversed order

}