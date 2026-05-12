#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main(void)
{
	ClapTrap ct("Clap");
	
	ct.attack("Enemy");
	ct.takeDamage(3);
	ct.beRepaired(2);
	
	ScavTrap st("Scav");
	
	st.attack("Enemy");
	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	
	FragTrap ft("Frag");
	
	ft.attack("Enemy");
	ft.takeDamage(30);
	ft.beRepaired(15);
	ft.highFivesGuys();
	
	return (0);
}
