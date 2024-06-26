/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:55 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 17:43:03 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &ref);
        Cat& operator=(const Cat &ref);
        ~Cat();
        void makeSound() const;
};