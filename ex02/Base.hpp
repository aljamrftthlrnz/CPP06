/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:53:22 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 19:32:22 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iomanip>
# include <iostream>
# include <cmath>
# include <cstdlib>
# include <ctime>

class Base {
    public : 
        virtual ~Base() ;
} ;

class A : public Base {} ;
class B : public Base {} ;
class C : public Base {} ;

Base*   generate (void) ;
void    identify(Base* p);
void    identify(Base& p);
