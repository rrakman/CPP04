/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:02 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 17:46:33 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"

int main()
{
    Animal *test = new Dog();
    test->makeSound();
    delete test;
    return 0;
}
