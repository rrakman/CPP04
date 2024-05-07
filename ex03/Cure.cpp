#include"Cure.hpp"

Cure::Cure() : AMateria("cure") 
{
    std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &ref)
{
    *this = ref;
    std::cout << "Cure copy constructor" << std::endl;
}

Cure& Cure::operator=(const Cure &ref) 
{
    if(this != &ref)
        this->type = ref.type;
    std::cout << "Cure assignation operator" << std::endl;
    return *this;
}

Cure::~Cure() 
{
    std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}