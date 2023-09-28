#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
	Animal* CatsAndDogs[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			CatsAndDogs[i] = new Cat();
		else
			CatsAndDogs[i] = new Dog();
		std::cout << "--------------------------" << std::endl;
	}
	std::cout << "==========================" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			std::cout << i << ": " << ((Cat *)CatsAndDogs[i])->getType() << " => ";
			((Cat *)CatsAndDogs[i])->makeSound();
			std::cout << std::endl;
		}
		else
		{
			std::cout << i << ": " << ((Cat *)CatsAndDogs[i])->getType() << " => ";
			((Cat *)CatsAndDogs[i])->makeSound();
			std::cout << std::endl;
		}
	}
	((Cat *)CatsAndDogs[0])->makeSound();
	((Dog *)CatsAndDogs[1])->makeSound();
	std::cout << "==========================" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete CatsAndDogs[i];
		std::cout << "--------------------------" << std::endl;
	}
	return (0);
}
