/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:54:35 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 19:32:50 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

int main () {
    srand(time(0));
    Base *a = generate();
    identify(a); 
    identify(*a);
    Base *b = generate();
    identify(b); 
    identify(*b);
    delete a; 
    delete b;
    return 0; 
}