/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:58 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 16:52:22 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout<<type<<" Constructed"<<std::endl;
    this->brain = new Brain();
    for(int i = 0 ; i<100 ; i++)
        brain->setIdea("test idea for dogs",i);
}

Dog::Dog(const Dog &ref) : Animal("Dog")
{
    *this = ref;
    std::cout<<"Dog Copy Constructor Called"<<std::endl;
    return;
}

Dog& Dog::operator=(const Dog &ref)
{
    if(this != &ref)
        this->type = ref.type;
    brain = new Brain(*(ref.brain));
    std::cout<<"Dog Assignement operator called"<<std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout<<type<< " Destructor called"<<std::endl;
}

void Dog::makeSound() const
{
    std::cout<<"*BARKING*, "<<getType()<<" is making some noise"<<std::endl;
}

void Dog::printidea(int i)
{
    if(i >= 0 && i < 100)
        std::cout<< brain->getIdea(i)<<std::endl;
    else
        std::cout<<"Idea not found, there is only 100 ideas."<<std::endl;
}