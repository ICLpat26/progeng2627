/*#include <iostream>
#include <vector>
// this header is needed to use vectors

int main(){
    std::vector<int> v; 
    // we declare a vector
    // the <> contain the type
    // for each cell of the vector
    // initially the vector is empty:
    // v: []

    // we can then start adding elements to the vector
    // this can be done using function push_back:

    v.push_back(10);

    // so now the vector contains one element:
    // v: [10]

    // let's add another element:

    v.push_back(20);

    // now the vector contains two elements:
    // v: [10, 20]

    // a key intuition about vectors is that the elements can be *indexed*
    // the first element has index 0, and so on 
    // up to (size of the vector - 1)
    // v:
    // value: |10|20|
    // index: | 0| 1|

    // we can index using square brackets, for example
    // if we want to print the first element we do the following:

    std::cout << v[0] << std::endl;
    // this will print 10

    // if we want to print the second element we do the following:

    std::cout << v[1] << std::endl;
    // this will print 20

    // we can also use indexing to overwrite the value of cells:

    v[0] = 15;

    // v:
    // value: |15|20|
    // index: | 0| 1|

    std::cout << v[0] << std::endl;
    // this will print 15

    // however we can't use indexing
    // to access or store values in cells that don't exist
    // for example in this case writing:

    // v[2] = 30;

    // or

    // std::cout << v[4] << std::endl;

    // would be a mistake
    // because there are no cells for indices 2 or 4 
    // (confusingly enough the program may or may not crash)

    // the vector grows using push_back as seen above

    v.push_back(30);

    // v:
    // value: |15|20|30|
    // index: | 0| 1| 2|

    // we can always check how many cells there are
    // by using function size():

    std::cout << v.size() << std::endl;
    // this will print 3

    // we can't print the whole vector at once!
    // the following line:
    // std::cout << v << std::endl; 
    // would not work!

}*/

/*#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    for(int i = 1; i <= 3; i++){
        int tmp;
        std::cout << "Give a number: ";
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::cout << v[0] * (v[1] + v[2]);
}*/

/*#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int tmp = 1;
    // initialised to anything other than 0 to enter the loop the first time

    std::cout << "please enter a sequence terminated by 0" << std::endl;
    while(tmp != 0){ // while the number in input is not 0...
        std::cin >> tmp; // we read a number
        sequence.push_back(tmp); // we store the number in the vector
    }

    std::cout << "you entered the following sequence" << std::endl;

    // in order to print the vector we need 
    // to print it one element at a time
    // so we need to index it

    // i is the variable we use in this loop for the indexing of the vector
    // it starts at 0 and increases by 1 at each iteration
    // when the index reaches the size of the vector we leave the loop
    // valid indices are 0 to (sequenze.size() - 1)

    for(int i = 0; i < sequence.size(); i++){

        std::cout << sequence[i] << std::endl;
    }

    std::cout << "in reverse order:" << std::endl;

    // this time the first value for i is 
    // the index of the last element 
    // which is at index (sequence.size() - 1)
    // i decreases by i at each iteration
    // when it reaches value 0 we need to stay in the loop
    // because 0 is still a valid index

    for(int i = sequence.size() - 1; i >= 0; i--){
        std::cout << sequence[i] << std::endl;
    }

}*/

/*#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);

    std::cout << v.at(0) << std::endl;
    // this will print 10

    std::cout << v.at(1) << std::endl;
    // this will print 20

    v.at(1) = 15;

    std::cout << v.at(1) << std::endl;
    // this will print 15

    v.at(2) = 2;
    // this will throw an exception

    std::cout << v.at(2) << std::endl;
    // this will not be executed

}*/

/*#include <iostream>
#include <vector>
int main(){
    int n, t;
    std::vector<int> v;
    std::cout << "Enter a number n: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Please enter a number: ";
        std::cin >> t;
        v.push_back(t);
    }
    std::cout << "Please enter t: ";
    std::cin >> t;
    for(int i = 0; i < n; i++){
        if(v[i] < t){
            std::cout << v[i] << " ";
        }
    }
}*/

/*#include <iostream>
#include <vector>
int main(){
    int n, t, count = 0;
    std::vector<int> v;
    std::cout << "Enter a number n: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Please enter a number: ";
        std::cin >> t;
        v.push_back(t);
    }
    std::cout << "Please enter s: ";
    std::cin >> t;
    for(int i = 0; i < n; i++){
        if(v[i] == t){
            count += 1;
        }
    }
    std::cout << "There are " << count << " occurences of " << t;
}*/

#include <iostream>
#include <vector>
int main(){
    int n, t, count = 0;
    std::vector<int> v;
    std::vector<int> index;
    std::cout << "Enter a number n: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Please enter a number: ";
        std::cin >> t;
        v.push_back(t);
    }
    std::cout << "Please enter s: ";
    std::cin >> t;
    for(int i = 0; i < n; i++){
        if(v[i] == t){
            count += 1;
            index.push_back(i);
        }
    }
    std::cout << "There are " << count << " occurences of " << t << " at indices: ";
    for(int i = 0; i < index.size(); i++){
        std::cout << index[i] << " ";
    }
}