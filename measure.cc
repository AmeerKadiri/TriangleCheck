#include <iostream>

double convertToCentimeters(double value, std::string unit) {
    if (unit == "meters") {
        return value * 100;
    } else if (unit == "inches") {
        return value * 2.54;
    } else if (unit == "feet") {
        return value * 30.48;
    } else {
        std::cout << "Invalid unit. Conversion not supported." << std::endl;
        return 0.0;
    }
}

double convertToMeters(double value, std::string unit) {
    if (unit == "centimeters") {
        return value / 100;
    } else if (unit == "inches") {
        return value * 0.0254;
    } else if (unit == "feet") {
        return value * 0.3048;
    } else {
        std::cout << "Invalid unit. Conversion not supported." << std::endl;
        return 0.0;
    }
}

double convertToInches(double value, std::string unit) {
    if (unit == "centimeters") {
        return value / 2.54;
    } else if (unit == "meters") {
        return value / 0.0254;
    } else if (unit == "feet") {
        return value * 12;
    } else {
        std::cout << "Invalid unit. Conversion not supported." << std::endl;
        return 0.0;
    }
}

double convertToFeet(double value, std::string unit) {
    if (unit == "centimeters") {
        return value / 30.48;
    } else if (unit == "meters") {
        return value / 0.3048;
    } else if (unit == "inches") {
        return value / 12;
    } else {
        std::cout << "Invalid unit. Conversion not supported." << std::endl;
        return 0.0;
    }
}

int main() {
    double value;
    std::string unit;

    std::cout << "Enter a value: ";
    std::cin >> value;

    std::cout << "Enter the unit (centimeters, meters, inches, feet): ";
    std::cin >> unit;

    double centimeters = convertToCentimeters(value, unit);
    double meters = convertToMeters(value, unit);
    double inches = convertToInches(value, unit);
    double feet = convertToFeet(value, unit);

    std::cout << "Centimeters: " << centimeters << std::endl;
    std::cout << "Meters: " << meters << std::endl;
    std::cout << "Inches: " << inches << std::endl;
    std::cout << "Feet: " << feet << std::endl;

    return 0;
}