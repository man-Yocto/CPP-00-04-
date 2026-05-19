#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brain::Brain(const Brain& o)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = o.ideas[i];
}

Brain& Brain::operator=(const Brain& o)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &o)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = o.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return ideas[idx];
	return "";
}

void Brain::setIdea(int idx, const std::string& idea)
{
	if (idx >= 0 && idx < 100)
		ideas[idx] = idea;
}
