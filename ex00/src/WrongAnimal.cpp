#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    this->_type = copy._type;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    this->_type = copy._type;
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string	WrongAnimal::getType()const
{
    return (this->_type);
}
