#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called for " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &x)
	: _name(x._name), _hitPoints(x._hitPoints), 
	  _energyPoints(x._energyPoints), _attackDamage(x._attackDamage)
{
	std::cout << "ClapTrap copy constructor called for " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &x)
{
	if (this != &x)
	{
		_name = x._name;
		_hitPoints = x._hitPoints;
		_energyPoints = x._energyPoints;
		_attackDamage = x._attackDamage;
		std::cout << "ClapTrap assignment operator called for " << this->_name << std::endl;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack (no energy or health)!\n";
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
				  << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!\n";
		return;
	}
	
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= amount;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! HP: " 
			  << this->_hitPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!\n";
	}
	else if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot repair!\n";
	}
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " repairs and regains " << amount 
				  << " HP! HP: " << this->_hitPoints << "\n";
	}
}