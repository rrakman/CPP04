/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:45:10 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 20:26:24 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class WrongAnimal{
    protected : 
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &ref);
        WrongAnimal& operator=(const WrongAnimal &ref);
        virtual ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};