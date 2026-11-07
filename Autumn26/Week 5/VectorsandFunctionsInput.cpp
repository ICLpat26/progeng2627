/*#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int count;
    double tmp;
    std::cout << "How many elements would you like? ";
    std::cin >> count;
    for(int i = 0; i < count; i++){
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}*/

/*#include <iostream>
#include <vector>

// note: const before std::vector<double>
// and the & afterwards

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
    vin.push_back(10);
    return sum;

}

int main(){
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}*/

/*#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    double smallest = vin[0];
    int index = 0;
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < smallest){
            smallest = vin[i];
            index = i;
        }
    }
    return index;
}

int main(){
    std::vector<double> v;
    v.push_back(23);
    v.push_back(-12);
    v.push_back(1.3);
    std::cout << min_vector_element(v);
}*/

#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i = 0; i < n; i++){
        if(vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    std::vector<int> v;
    v.push_back(12);
    //v = {0, 2, 4, -1, 14, 5};
    std::cin >> n;
    std::cout << search_vector(n, v);
}