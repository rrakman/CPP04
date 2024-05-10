#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
    *this = ref;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ref)
{
    if(this != &ref)
    {
        for(int i = 0; i < 4; i++)
        {
            if(inventory[i])
                delete inventory[i];
            inventory[i] = ref.inventory[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i])
            delete inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if(!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i] && inventory[i]->getType() == type)
            return inventory[i]->clone();
    }
    return 0;
}

