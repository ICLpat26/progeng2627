/*#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i = 0; i < size(vin1); i++){
        int prevnum = 0;
        if(i > 0){
            prevnum = vin1[i - 1];
        }
        for(int j = 0; j < size(vin2); j++){
            if((vin1[i] >= vin2[j]) && (prevnum < vin2[j])){
                vout.push_back(vin2[j]);
            }
        }
        vout.push_back(vin1[i]);
    }
    if(vin1[size(vin1)-1] < vin2[size(vin2)-1]){
        for(int i = 0; i < size(vin2); i++){
            if(vin2[i] > vin1[size(vin1)-1]){
                vout.push_back(vin2[i]);
            }
        }
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
        for(int i = 0; i < size(out); i++){
            std::cout << out[i];
        }
    }
}*/

/*#include <iostream>

int main(){
    std::string s;
    std::cin >> s;

    // std::string variables can be indexed character by character
    for(int i = 0; i < s.size(); i++){
        std::cout << s[i] << std::endl;
    }

}*/

/*// this will not work
#include <iostream>
#include <string>

int count_occurrences(std::string s, std::string letter){
    int out = 0;
    for(int i = 0; i < s.size(); i++){
        // s[i] is a char and can't be compared with std::string
        if(s[i] == letter){
            out++;
        }
    }
    return out;
}

int main(){

    std::string s = "hello";
    std::string letter = "l";
    std::cout << "there are " << count_occurrences(s, letter) << " of " << letter << " in " << s << std::endl;

}*/

/*#include <iostream>
#include <string>

// changed std::string letter
// to char letter
int count_occurrences(std::string s, char letter){
    int out = 0;
    for(int i = 0; i < s.size(); i++){
        // now they are both char and can be compared
        if(s[i] == letter){
            out++;
        }
    }
    return out;
}

int main(){

    std::string s = "hello";
    // not only this changed from std::string to char
    // but also "l" changed to 'l' because char requires single quotes
    char letter = 'l';
    std::cout << "there are " << count_occurrences(s, letter) << " occurrences of " << letter << " in " << s << std::endl;

}*/

#include <iostream>
#include <string>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    // we can use push_back as we would do with std::vector
    return s;
}

int count_occurrences(std::string s, std::string letter){
    int out = 0;
    for(int i = 0; i < s.size(); i++){
        // now s[i] is converted to std::string before the comparison
        if(char_to_string(s[i]) == letter){
            out++;
        }
    }
    return out;
}

int main(){

    std::string s = "hello";
    std::string letter = "l";
    std::cout << "there are " << count_occurrences(s, letter) << " occurrences of " << letter << " in " << s << std::endl;

}