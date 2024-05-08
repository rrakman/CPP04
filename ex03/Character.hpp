#pragma once
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        Character(std::string const &name);
        Character(Character const &ref);
        Character &operator=(Character const &ref);
        ~Character();
        
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};