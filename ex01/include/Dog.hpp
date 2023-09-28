# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
    	Brain* _dogBrain;

    public:
        Dog(void);
        Dog(const Dog &copy);
        ~Dog(void);
        Dog             &operator=(const Dog &copy);
        void            makeSound(void) const;
        virtual Brain* getBrain() const;

};

# endif
