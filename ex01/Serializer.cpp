/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:58:14 by amirfatt          #+#    #+#             */
/*   Updated: 2025/02/13 16:29:55 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

uintptr_t Serializer::serialize (Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }
Data* Serializer::deserialize (uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

