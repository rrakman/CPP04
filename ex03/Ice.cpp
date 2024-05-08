#include"Ice.hpp"

Ice::Ice() : AMateria("ice") 
{
    std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice &ref)
{
    *this = ref;
    std::cout << "Ice copy constructor" << std::endl;
}

Ice& Ice::operator=(const Ice &ref) 
{
    if(this != &ref)
        this->type = ref.type;
    std::cout << "Ice assignation operator" << std::endl;
    return *this;
}

Ice::~Ice() 
{
    std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
