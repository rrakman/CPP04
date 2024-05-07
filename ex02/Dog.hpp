/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:00 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 16:50:59 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &ref);
        Dog& operator=(const Dog &ref);
        ~Dog();
        void makeSound() const;
        void printidea(int i);
};