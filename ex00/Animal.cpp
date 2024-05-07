/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:50 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/07 20:05:50 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout<<"Default "<< type <<" Constructed"<<std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout<<"Animal "<<type<<" Constructed"<<std::endl;
}

Animal::~Animal()
{
    std::cout<<"Default Animal Desctructor Called"<<std::endl;
}

Animal::Animal(const Animal &ref)
{
    *this = ref;
    std::cout<<"Animal Copy Constructor Called"<<std::endl;
    return;
}

Animal& Animal::operator=(const Animal &ref)
{
    if(this != &ref)
        this->type = ref.type;
    std::cout<<"Animal Assignement operator called"<<std::endl;
    return *this;
}

void Animal::makeSound() const
{
    std::cout<<"AAAAAA "<<getType()<<" is making some noise"<<std::endl;
}

std::string Animal::getType() const
{
    return type;
}