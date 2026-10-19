/*#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;

    std::cin >> length_in >> unit_in;

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;

        std::cout << length_out << " " << unit_out << std::endl;
    }
    else if(unit_in == "mile"){
        unit_out = "km";
        length_out = length_in * mile_to_km;

        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

}*/

#include <iostream>
#include <string>

int main(){
    double input_temp, output_temp;
    std::string input_unit, output_unit;

    std::cout << "Type a temperature in celsius or fahrenheit to convert: ";
    std::cin >> input_temp >> input_unit;

    if((input_unit == "c") || (input_unit == "C")){
        output_temp = input_temp * 1.8 + 32;
        output_unit = "F";
        std::cout << output_temp << " " << output_unit;
    } else if((input_unit == "f") || (input_unit == "F")){
        output_temp = (input_temp - 32) * 5 / 9;
        output_unit = "C";
        std::cout << output_temp << " " << output_unit;
    } else{
        std::cout << "Unit not recognised! Try again.";
    }
}