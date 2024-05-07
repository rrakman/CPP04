/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:45:13 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 18:55:20 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout<<type<<" Constructed"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
    *this = ref;
    std::cout<<"Cat Copy Constructor Called"<<std::endl;
    return;
}

WrongCat& WrongCat::operator=(const WrongCat &ref)
{
    if(this != &ref)
        this->type = ref.type;
    std::cout<<"Cat Assignement operator called"<<std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout<<type<< " Destructor called"<<std::endl;
}