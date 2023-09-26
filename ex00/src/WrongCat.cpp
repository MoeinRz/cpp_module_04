#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    this->_type = copy._type;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    this->_type = copy._type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat makeSound called" << std::endl;
}
