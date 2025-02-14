/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 09:43:08 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 13:09:12 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int main (int argc, char* argv[]) {
    if(argc == 2) {
        std::string literal = argv[1];
        ScalarConverter::convert(literal); 
    }
    else
        std::cout << "Enter a <literal>." << std::endl;
    return 0; 
} 