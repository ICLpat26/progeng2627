/*#include <iostream>

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    // we swap the values
    // in order to do so we need to use
    // a third temporary variable

    int tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

}*/

/*// wrong version!
#include <iostream>

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    // this will not work:
    n1 = n2;
    n2 = n1;

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

}*/

/*// wrong version!
#include <iostream>

// type void means we are not returning anything

// this won't work!
void myswap(int n1, int n2){
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}*/

/*#include <iostream>

// this is the only different line:
void myswap(int& n1, int& n2){

    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

int main(){
    int n1, n2;

    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}*/

/*#include <iostream>
#include <string>

void myswap(std::string& word1, std::string& word2){
    std::string temp;
    temp = word1;
    word1 = word2;
    word2 = temp;
}

int main(){
    std::string word_1, word_2;
    std::cout << "Please enter two words: " << std::endl;
    std::cin >> word_1 >> word_2;
    std::cout << "You entered: " << std::endl << "Word 1: " << word_1 << std::endl << "Word 2: " << word_2 << std::endl;
    myswap(word_1, word_2);
    std::cout << "After swapping the values: " << std::endl << "Word 1: " << word_1 << std::endl << "Word 2: " << word_2 << std::endl;
}*/

#include <iostream>

void myswap(double& n1, double& n2){

    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}
// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

void sort_three_numbers(double& s1, double& s2, double& s3){
    // complete this function
    // so that the output is as in the examples below
    if(s1 > s2){
        myswap(s1, s2);
    }
    if(s1 > s3){
        myswap(s1, s3);
    }
    if(s2 > s3){
        myswap(s2, s3);
    }
    // use function myswap within this function
    // (remember to change the type of the parameters to double)
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}