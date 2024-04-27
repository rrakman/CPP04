/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:02 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/27 19:10:59 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete i;
    delete j;
    
    std::cout<<"\033[31m--------------------------------------------\033[0m"<<std::endl;
    const WrongAnimal* justanimal = new WrongAnimal();
    const WrongAnimal* notaCat = new WrongCat();
    
    justanimal->makeSound();
    notaCat->makeSound();
    
    delete justanimal;
    delete notaCat;
    return 0;
}