/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 12:23:06 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 16:41:09 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int main () {
    Data data = { 100 } ; 
    Data *ptr = &data;

    std::cout << "Original pointer: " << ptr << std::endl;
    uintptr_t serialized = Serializer::serialize(ptr);
    std::cout << "Serialized pointer: " << serialized << std::endl;
    
    Data* deserialized = Serializer::deserialize(serialized);
    if(!deserialized) {
        std::cerr << "Error: Deserialization failed!" << std::endl; 
        return 1; 
    }
    std::cout << "Deserialized pointer: " << deserialized << std::endl;

    std::cout << ((ptr == deserialized ) ? "DesPtr equals original pointer" : "DesPtr doesn't equal original pointer" ) << std::endl;
    return 0;
}
