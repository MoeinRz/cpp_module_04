#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{

	std::cout << "============[Test1]==============" << std::endl;
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
		Brain *brain = CatsAndDogs[i]->getBrain();
		brain->setIdea(0, "I'm hungry");
		brain->setIdea(1, "Ball!!!!!");
	}

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			std::cout << i << ": " << ((Cat *)CatsAndDogs[i])->getType() << " => ";
			((Cat *)CatsAndDogs[i])->makeSound();
			std::cout << "Brain: " << ((Cat *)CatsAndDogs[i])->getBrain()->getIdea(0);
			std::cout << std::endl;
		}
		else
		{
			std::cout << i << ": " << ((Cat *)CatsAndDogs[i])->getType() << " => ";
			((Cat *)CatsAndDogs[i])->makeSound();
			std::cout << "Brain: " << ((Cat *)CatsAndDogs[i])->getBrain()->getIdea(1);
			std::cout << std::endl;
		}
	}
	std::cout << "==========================" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete CatsAndDogs[i];
		std::cout << "--------------------------" << std::endl;
	}

	// std::cout << "============[Test2: to insure the copy is deep]==============" << std::endl;
    // Dog basic;

    // Dog Imp_basic = basic;

    // if (basic.getBrain() == Imp_basic.getBrain())
	// {
    //     std::cout << "Copy is shallow, both basic and Imp-basic share the same Brain." << std::endl;
    // }
	// else
	// {
    //     std::cout << "Copy is deep, basic and Imp-basic have different Brains." << std::endl;
    // }


	// std::cout << "============[Test3: virtual keyword]==============" << std::endl;

	// Animal* animalPtr = new Dog;
    // delete animalPtr;
    // std::cout << "Without virtual keyword in base class destructor Will not call the Dog destructor" << std::endl;

	return (0);
}
