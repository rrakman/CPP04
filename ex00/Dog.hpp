/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:00 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 17:47:03 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &ref);
        Dog& operator=(const Dog &ref);
        ~Dog();
        void makeSound() const;
};