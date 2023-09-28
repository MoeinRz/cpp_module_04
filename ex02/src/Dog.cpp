#include "../include/Dog.hpp"
#include "../include/Animal.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    _dogBrain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = copy._type;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete _dogBrain;
}

Dog  &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->_type = copy._type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Wouf Wouf..." << std::endl;
}

Brain* Dog::getBrain()
{
    return (this->_dogBrain);
}
