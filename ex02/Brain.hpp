/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:43:30 by rrakman           #+#    #+#             */
/*   Updated: 2024/05/06 15:46:14 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &ref);
        Brain& operator=(const Brain &ref);
        ~Brain();
        void setIdea(std::string idea, int index);
        std::string getIdea(int i);
};