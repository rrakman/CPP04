/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:02 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 17:41:43 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    // Cat basic;
    // {
    //     Cat tmp = basic;
    //     // for (int i = 0; i < 100; i++)
    //     //     tmp.printidea(i);
    // }
    
    Animal *Animals[4] = {new Cat(),new Cat(),new Dog(),new Dog()};
    for (int i = 0; i < 4; i++)
    {
        Animals[i]->makeSound();
        delete Animals[i];
    }
    return 0;
}
