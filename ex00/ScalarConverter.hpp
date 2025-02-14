/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:18:19 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 14:36:29 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <typeinfo>
# include <iomanip>
# include <iostream>
# include <cstring>
# include <cstdlib>
# include <cstdlib>
# include <cerrno> 
# include <string>
# include <limits>
# include <cmath>

class ScalarConverter {
    private : 
        ScalarConverter () ; 
        ~ScalarConverter() ; 
        ScalarConverter (const ScalarConverter& other) ;
        ScalarConverter& operator=(const ScalarConverter& other) ; 
    public : 
        static void convert (const std::string& literal) ;
        
} ;

bool isChar (const std::string& literal) ;
bool isInt (const std::string& literal) ; 
bool isFloat (const std::string& literal) ;
bool isDouble (const std::string& literal) ;

void printFloat (double f);
void printDouble (double d);
void printChar (double value);
void printInt (double value);

bool safeConvertD (const std::string& literal, double& value);
bool safeConvertF (const std::string& literal, float& value);
