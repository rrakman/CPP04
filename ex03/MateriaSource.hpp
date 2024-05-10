#pragma once
#include"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inventory[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &ref);
        MateriaSource &operator=(MateriaSource const &ref);
        ~MateriaSource();
        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};