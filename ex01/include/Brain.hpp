# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
    private:
        std::string _ideas[100];

    public:
        Brain(void);
        Brain(const Brain &copy);
        ~Brain(void);
        Brain& operator=(const Brain &copy);
        std::string getIdea(int index);

};

# endif
