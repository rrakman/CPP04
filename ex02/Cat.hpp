/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:55 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 16:50:35 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &ref);
        Cat& operator=(const Cat &ref);
        ~Cat();
        void makeSound() const;
        void printidea(int i);
};