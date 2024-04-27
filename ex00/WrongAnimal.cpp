/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:45:07 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 18:47:02 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout<<"Default "<< type <<" Constructed"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout<<"WrongAnimal "<<type<<" Constructed"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"Default WrongAnimal Desctructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
    *this = ref;
    std::cout<<"WrongAnimal Copy Constructor Called"<<std::endl;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref)
{
    if(this != &ref)
        this->type = ref.type;
    std::cout<<"WrongAnimal Assignement operator called"<<std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"AAAAAA "<<getType()<<" is making some noise"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}