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
			std::cout << "CAT " << i << ":" << ((Cat *)CatsAndDogs[i])->getBrain() << std::endl;
		else
			std::cout << "DOG " << i << ": " << ((Cat *)CatsAndDogs[i])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "==========================" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete CatsAndDogs[i];
		std::cout << "--------------------------" << std::endl;
	}
	return (0);
}
