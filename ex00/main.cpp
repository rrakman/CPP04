/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:48:02 by rrakman           #+#    #+#             */
/*   Updated: 2024/04/26 17:20:08 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

int main()
{
    const Animal *a = new Animal("Dog");
    a->makeSound();
    std::cout<<a->get_type()<<std::endl;
    delete a;
}