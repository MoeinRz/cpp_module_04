#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
    std::cout << "-------------------------------------" << std::endl;
	const WrongAnimal* wrong = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();;
    return (0);
}
