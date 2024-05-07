#include"AMateria.hpp"

AMateria::AMateria() : type("default")
{
    std::cout<<"AMateria default constructor called"<<std::endl;
}
AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout<<"AMateria "<<type<<" constructor called"<<std::endl;
}

AMateria::~AMateria()
{
    std::cout<<"AMateria destructor called"<<std::endl;
}

AMateria::AMateria(const AMateria &ref)
{
    std::cout<<"AMateria copy constructor called"<<std::endl;
    *this = ref;
}

AMateria& AMateria::operator=(const AMateria &ref)
{
    std::cout<<"AMateria assignation operator called"<<std::endl;
    if (this != &ref)
        this->type = ref.type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    std::cout<<"* uses some materia on "<<target.getName()<<" *"<<std::endl;   
}