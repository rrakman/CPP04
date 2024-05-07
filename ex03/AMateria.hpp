#pragma once
#include<iostream>
#include"ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const &type);
        virtual ~AMateria();
        AMateria(const AMateria &ref);
        AMateria& operator=(const AMateria &ref);
        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);
};