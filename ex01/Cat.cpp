/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:53 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 17:11:37 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout<<type<<" Constructed"<<std::endl;
}

Cat::Cat(const Cat &ref)
{
    *this = ref;
    std::cout<<"Cat Copy Constructor Called"<<std::endl;
    return;
}

Cat& Cat::operator=(const Cat &ref)
{
    if(this != &ref)
        this->type = ref.type;
    std::cout<<"Cat Assignement operator called"<<std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout<<type<< " Destructor called"<<std::endl;
}

void Cat::makeSound() const
{
    std::cout<<"Meoww, "<<getType()<<" is making some noise"<<std::endl;
}