/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:46 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 17:42:42 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class Animal{
    protected : 
        std::string type;
    public :
        Animal();
        Animal(std::string type);
        Animal(const Animal &ref);
        Animal& operator=(const Animal &ref);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};