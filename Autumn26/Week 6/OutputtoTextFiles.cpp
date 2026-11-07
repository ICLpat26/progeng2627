/*#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::string inputfilename;
    std::cout << "Enter name of input file: ";
    std::cin >> inputfilename;
    std::ifstream infile; 
    infile.open(inputfilename + ".txt");

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

    std::string outputfilename;
    std::cout << "Enter name of output file: ";
    std::cin >> outputfilename;
    std::ofstream outfile; 
    outfile.open(outputfilename + ".txt");
    for(int i = size(v) - 1; i > -1; i--){
        outfile << v[i] << std::endl;
    }
    outfile.close();
    // TODO: print the content of v in reversed order
    // onto a different text file

}*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    bool match = false;
    for(int i = 0; i < size(vin1); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < size(vin2); i++){
        for(int j = 0; j < size(vout); j++){
            if(vin2[i] == vout[j]){
                match = true;
            }
            
        }
        if(match == false){
            vout.push_back(vin2[i]);
        }
        match = false;
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < size(vin1); i++){
        for(int j = 0; j < size(vin2); j++){
            if(vin1[i] == vin2[j]){
                vout.push_back(vin1[i]);
            }
        }
    }
}

int main(){
    std::ifstream infile1;
    infile1.open("warehouse1.txt");
    std::vector<std::string> v1;
    std::string tmp1;
    while(infile1 >> tmp1){
        v1.push_back(tmp1);
    }
    infile1.close();

    std::ifstream infile2;
    infile2.open("warehouse2.txt");
    std::vector<std::string> v2;
    std::string tmp2;
    while(infile2 >> tmp2){
        v2.push_back(tmp2);
    }
    infile2.close();

    std::ofstream outfileu;
    outfileu.open("union.txt");
    std::vector<std::string>voutu;
    union_vector(v1, v2, voutu);
    for(int i = 0; i < size(voutu); i++){
        outfileu << voutu[i] << std::endl;
    }
    outfileu.close();

    std::ofstream outfilei;
    outfilei.open("intersection.txt");
    std::vector<std::string> vouti;
    intersection_vector(v1, v2, vouti);
    for(int i = 0; i < size(vouti); i++){
        outfilei << vouti[i] << std::endl;
    }
    outfilei.close();
}