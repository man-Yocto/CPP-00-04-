#pragma once
#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain& o);
	Brain& operator=(const Brain& o);
	~Brain();

	std::string getIdea(int idx) const;
	void setIdea(int idx, const std::string& idea);
};
