/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:53 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 16:52:39 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout<<type<<" Constructed"<<std::endl;
    this->brain = new Brain();
    for(int i = 0 ; i<100 ; i++)
        brain->setIdea("test idea",i);
}

Cat::Cat(const Cat &ref) : Animal("Cat")
{
    *this = ref;
    std::cout<<"Cat Copy Constructor Called"<<std::endl;
}

Cat& Cat::operator=(const Cat &ref)
{
    if(this != &ref)
        this->type = ref.type;
    brain = new Brain(*(ref.brain));
    std::cout<<"Cat Assignement operator called"<<std::endl;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout<<type<< " Destructor called"<<std::endl;
}

void Cat::makeSound() const
{
    std::cout<<"Meoww, "<<getType()<<" is making some noise"<<std::endl;
}

void Cat::printidea(int i)
{
    if(i >= 0 && i < 100)
        std::cout<< brain->getIdea(i)<<std::endl;
    else
        std::cout<<"Idea not found, there is only 100 ideas."<<std::endl;
}