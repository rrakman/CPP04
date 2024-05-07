#include"AMateria.hpp"
#include"ICharacter.hpp"
#include"Cure.hpp"

int main()
{
    AMateria *cure = new Cure();

    delete cure;
}