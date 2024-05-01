/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:58 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 17:45:38 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout<<type<<" Constructed"<<std::endl;
}

Dog::Dog(const Dog &ref)
{
    *this = ref;
    std::cout<<"Dog Copy Constructor Called"<<std::endl;
    return;
}

Dog& Dog::operator=(const Dog &ref)
{
    if(this != &ref)
        this->type = ref.type;
    std::cout<<"Dog Assignement operator called"<<std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout<<type<< " Destructor called"<<std::endl;
}

void Dog::makeSound() const
{
    std::cout<<"*BARKING*, "<<getType()<<" is making some noise"<<std::endl;
}