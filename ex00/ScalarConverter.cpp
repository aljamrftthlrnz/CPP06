/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:37:42 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 19:35:04 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter () {}
ScalarConverter::~ScalarConverter () {}
ScalarConverter::ScalarConverter (const ScalarConverter& other) { *this = other; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter & ) { return *this; }

bool isChar (const std::string& literal) {
    return literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'';
}

bool isInt (const std::string& literal) {
    for (int i = 0; literal[i]; i++) {
        if(i == 0 && (literal[i] == '+' || literal[i] == '-'))
            continue ;
        if(!std::isdigit(literal[i]))
            return false ;
    }
    return true;
}

bool isFloat (const std::string& literal) {
    if (literal == "-inff" || literal == "+inff" || literal == "nanf")
        return true; 
    if (literal[literal.length() - 1] == 'f' && literal[literal.length() - 2] == 'f')
        return false ;
    if(literal[literal.length() - 1] == 'f' && literal.find('.') != std::string::npos)
        return true ; 
    return false;
}

bool isDouble (const std::string& literal) {
    if(literal[literal.length()-1] == 'f')
        return false ; 
    if (literal == "-inf" || literal == "+inf" || literal == "nan")
        return true;
    if(literal.find('.') != std::string::npos)
        return true ; ; 
    return false;  
}

void printFloat (double f) {
    if(std::isnan(f)) 
        std::cout << "float: nanf" << std::endl;
    else if (std::isinf(f))
        std::cout << "float: " << (f > 0 ? "+inff" : "-inff") << std::endl;
    else
        std::cout << "float: " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
    return ;
}

// std::setprecision(int n)
// format floating-point values on output operations.

void printDouble (double d) {
    if(std::isnan(d))
        std::cout << "double: nan" << std::endl;
    else if (std::isinf(d))
        std::cout << "double: " << (d > 0 ? "+inf" : "-inf") << std::endl;
    else
        std::cout << "double: " << std::setprecision(1) << std::fixed << d << std::endl;  
    return ;
}

void printChar (double value) {
    if (value <= std::numeric_limits<char>::max() && value >= std::numeric_limits<char>::min())
    {
        char c = static_cast<char>(value);
        std::cout << "char: " << (!std::isprint(c) ? "non displayable" : (std::string("'") + c + "'")) << std::endl; 
    } else {
        std::cout << "char: impossible" << std::endl;
    }
    return ;
}

void printInt (double value) {
    if(std::isnan(value) || std::isinf(value)) {
        std::cout << "int: impossible" << std::endl;
    } else if (value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min()) {
        int i = static_cast<int>(value);
        std::cout << "int: " << i << std::endl;
    } else {
        std::cout << "int: " << ((value > std::numeric_limits<int>::max()) ? "2147483647" : "-2147483648") << std::endl;
    }
    return ;
}

bool safeConvertD (const std::string& literal, double& value) { 
    char* endPtr = NULL;
    value = std::strtod(literal.c_str(), &endPtr);
    return literal.c_str() != endPtr && *endPtr == '\0';
}

bool safeConvertF (const std::string& literal, float& value) {
    char* endPtr = NULL;
    value = std::strtof(literal.c_str(), &endPtr);
    return literal.c_str() != endPtr && *endPtr == 'f';
}

void ScalarConverter::convert (const std::string& literal) {
    
    if(isChar(literal)) {
        char c = literal[1]; 
        printChar(static_cast<double>(c));
        printInt(static_cast<double>(c));
        printFloat(static_cast<double>(c));
        printDouble(static_cast<double>(c));
    } else if(isInt(literal)) {
        double i; 
        if(safeConvertD(literal, i)) {
            printChar(i);
            printInt(i);
            printFloat(i);
            printDouble(i); 
        } else 
            std::cout << "Failed to convert" << std::endl;
    } else if(isFloat(literal)) {
        float f;
        if(safeConvertF(literal, f)) {
            printChar(f);
            printInt(f);
            printFloat(f);
            printDouble(f); 
        }
        else
            std::cout << "Failed to convert" << std::endl;
    } else if(isDouble(literal)) {            
        double d;
        if(safeConvertD(literal, d)) {
            printChar(d);
            printInt(d);
            printFloat(d);
            printDouble(d); 
        } else 
            std::cout << "Failed to convert" << std::endl;
    } else {
        std::cout << "Conversion impossible" << std::endl; 
    }
}
