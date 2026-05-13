#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void)
{
	ScavTrap st("Scav");
	
	st.attack("Enemy");
	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	
	return (0);
}
