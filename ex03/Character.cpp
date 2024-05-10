#include"Character.hpp"
#include"ICharacter.hpp"

Character::Character(std::string const &name) : name(name)
{
    std::cout << "Character "<<name<<" constructor" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
}

Character::Character(Character const &ref) : name(ref.name)
{
    *this = ref;
    std::cout << "Character "<<name<<" copy constructor" << std::endl;
}

Character &Character::operator=(Character const &ref)
{
    if(this != &ref)
    {
        this->name = ref.name;
        for(int i = 0; i < 4; i++)
        {
            if(inventory[i])
                delete inventory[i];
            inventory[i] = ref.inventory[i]->clone();
        }
    }
    std::cout << "Character "<<name<<" assignation operator" << std::endl;
    return (*this);
}

Character::~Character()
{
    std::cout << "Character "<<name<<" destructor" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i])
            delete inventory[i];
    }
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if(!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
    std::cout<<"Equipped "<<m->getType()<<std::endl;
}

void Character::unequip(int idx)
{
    std::cout<<"Unequipping slot "<<idx<<std::endl;
    if(idx >= 0 && idx < 4)
    {
        inventory[idx] = NULL;
    }
    else
        std::cout<<"Character "<<name<<" has only 4 slots so try 0 to 3"<<std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout<<"Character "<<name<<" has only 4 slots so try 0 to 3"<<std::endl;
        return;
    }
    if (this->inventory[idx])
    {
        this->inventory[idx]->use(target);
        std::cout<<"Character "<<this->name<<" uses "<<this->inventory[idx]->getType()<<std::endl;
    }
    else
        std::cout<<"Character "<<name<<" has no materia in slot "<<idx<<std::endl;
}

