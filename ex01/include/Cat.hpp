# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
	    Brain* _catBrain;

    public:
        Cat(void);
        Cat(const Cat &copy);
        ~Cat(void);
        Cat&    operator=(const Cat& copy);
        void    makeSound(void) const;
        virtual Brain* getBrain() const;
};

# endif
