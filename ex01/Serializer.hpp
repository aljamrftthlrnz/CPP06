/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:58:10 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 16:40:15 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <iomanip>
# include <stdint.h>

struct Data {
    int val;
} ;

class Serializer {
    private :
        Serializer () ;
        ~Serializer () ; 
        Serializer (const Serializer& ) ;
        Serializer& operator=(const Serializer& ) ; 
    public :
        static uintptr_t    serialize (Data* ptr) ;
        static Data*        deserialize (uintptr_t raw) ;
};
