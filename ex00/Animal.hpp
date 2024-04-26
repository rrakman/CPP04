/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:47:46 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/26 16:32:00 by rrakman          ###   ########.fr       */
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
        ~Animal();
        void makeSound() const;
        std::string get_type() const;
};