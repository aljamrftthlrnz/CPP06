/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:53:28 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 19:35:38 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base::~Base () {}

Base* generate (void) 
{
    int random = rand () % 3; 
    if(random == 0) {
        return new B ();    
    }
    else if(random == 1) {
        return new A ();    
    }
    else {
        return new C () ; 
    } 
    return 0;
}

void identify (Base* p) {
    if (!p) {
        std::cout << "Null pointer received" << std::endl;
        return ; 
    }
    if (dynamic_cast<A*>(p))
        std::cout << "Identified A*..." << std::endl; 
    else if (dynamic_cast<B*>(p))
        std::cout << "Identified B*..." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Identified C*..." << std::endl; 
    else 
        std::cout << "Not identifiable" << std::endl; 
}

void identify (Base& p) {
    try {
        (void)dynamic_cast<A&>(p) ;
        std::cout << "Identified A&..." << std::endl; 
        return ;
    } catch (...) {}

    try {
        (void)dynamic_cast<B&>(p) ;
        std::cout << "Identified B&..." << std::endl;
        return ;
    } catch (...) {}

    try {
        (void)dynamic_cast<C&>(p) ;
        std::cout << "Identified C&..." << std::endl;
        return ;
    } catch (...) {}
}