#include "../include/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->_type = "default";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->_type = copy._type;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->_type = copy._type;
    return (*this);
}

std::string	Animal::getType()const
{
    return (this->_type);
}
