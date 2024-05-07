/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:43:27 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 15:45:52 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain Constructor Called"<<std::endl;
}

Brain& Brain::operator=(const Brain &ref)
{
    if (this != &ref)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = ref.ideas[i];
    }
    std::cout<<"Brain assignment operator Called"<<std::endl;
    return *this;
}

Brain::Brain(const Brain &ref)
{
    *this = ref;
    std::cout<<"Brain Copy Constructor Called"<<std::endl;
}

Brain::~Brain()
{
    std::cout<<"Brain destructed successfully"<<std::endl;
}

void Brain::setIdea(std::string idea, int index)
{
    ideas[index] = idea;
}

std::string Brain::getIdea(int i)
{
    return ideas[i];
}
