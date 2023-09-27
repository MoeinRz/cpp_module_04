#include "../include/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
    return (*this);
}

std::string Brain::getIdea(int index)
{
    return (this->_ideas[index]);
}

// void Brain::setIdea(int index, std::string idea)
// {
//     this->_ideas[index] = idea;
// }

// void Brain::showIdeas(int index)
// {
//     for (int i = 0; i < index; i++)
//         std::cout << this->_ideas[i] << std::endl;
// }
