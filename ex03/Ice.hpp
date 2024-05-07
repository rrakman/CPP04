#pragma once
#include<iostream>
#include"AMateria.hpp"
#include"ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &ref);
        Ice& operator=(const Ice &ref);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter &target);
};