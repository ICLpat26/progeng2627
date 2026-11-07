/*#include <iostream>
#include <vector>

// maybe not the most efficient way:
std::vector<int> from_1_to_n(int n){

    std::vector<int> vout;

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

    return vout;

}

int main(){
    std::vector<int> v;

    v = from_1_to_n(5);

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

}*/

/*#include <iostream>
#include <vector>


void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<int> v;

    from_1_to_n(5, v);

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

}*/

/*#include <iostream>
#include <vector>


void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    // this program will not work as expected...
    std::vector<int> v;

    for(int n = 3; n < 7; n++){
        from_1_to_n(n, v);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}*/

/*#include <iostream>
#include <vector>


void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<int> v;
    for(int n = 3; n < 7; n++){

        v.clear();
        from_1_to_n(n, v);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}*/

#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin;
    std::vector<double> vout;
    vin = {0, -1, 13, 0.4};
    double t;
    std::cin >> t;
    filter_v(vin, t, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << " ";
    }
}