#include "../include/Cat.hpp"
#include "../include/Animal.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    _catBrain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_type = copy._type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _catBrain;
}

Cat  &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->_type = copy._type;
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "Meeeeooooo..." << std::endl;
}

// void    Cat::setBrain(int index, std::string idea)
// {
//     _catBrain->setIdea(index, idea);
// }

Brain* Cat::getBrain()
{
    return (this->_catBrain);
}
