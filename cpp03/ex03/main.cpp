#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main(void)
{
	/*
	ClapTrap ct("BasicClap");
	ct.attack("Enemy1");
	ct.takeDamage(3);
	ct.beRepaired(2);
	
	for (int i = 0; i < 10; i++)
		ct.beRepaired(1);
	ct.beRepaired(1);
	
	ClapTrap ct2("Damaged");
	ct2.takeDamage(100);
	ct2.takeDamage(5);
	ct2.attack("Enemy");
	ct2.beRepaired(10);
	
	ScavTrap st("BasicScav");
	st.attack("Enemy1");
	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	
	for (int i = 0; i < 20; i++)
		st.attack("Target");
	st.guardGate();
	
	ScavTrap st2("TankScav");
	st2.takeDamage(150);
	st2.guardGate();
	st2.attack("Enemy");
	
	FragTrap ft("BasicFrag");
	ft.attack("Enemy1");
	ft.takeDamage(30);
	ft.beRepaired(15);
	ft.highFivesGuys();
	
	for (int i = 0; i < 3; i++)
		ft.highFivesGuys();
	
	FragTrap ft2("EnergyFrag");
	for (int i = 0; i < 101; i++)
		ft2.attack("Target");
	ft2.attack("Final");
	ft2.highFivesGuys();
	*/

	DiamondTrap dt("Diamond");
	dt.whoAmI();
	
	for (int i = 0; i < 5; i++)
		dt.attack("Enemy");
	
	dt.takeDamage(25);
	dt.takeDamage(25);
	dt.takeDamage(25);
	dt.beRepaired(50);
	dt.whoAmI();
	
	DiamondTrap dt_energy("EnergyDiamond");
	for (int i = 0; i < 51; i++)
		dt_energy.attack("Target");
	dt_energy.attack("FailAttack");
	dt_energy.beRepaired(10);
	dt_energy.whoAmI();
	
	DiamondTrap dt_death("DeadDiamond");
	dt_death.takeDamage(100);
	dt_death.attack("Impossible");
	dt_death.beRepaired(50);
	dt_death.whoAmI();
	
	DiamondTrap dt_original("Original");
	dt_original.takeDamage(30);
	dt_original.whoAmI();
	DiamondTrap dt_copy(dt_original);
	dt_copy.whoAmI();
	
	DiamondTrap dt_assigned("Assigned");
	DiamondTrap dt_assigner("Assigner");
	dt_assigner.takeDamage(40);
	dt_assigned.whoAmI();
	dt_assigned = dt_assigner;
	dt_assigned.whoAmI();
	
	DiamondTrap dt1("First");
	DiamondTrap dt2("Second");
	DiamondTrap dt3("Third");
	dt1.attack("Target");
	dt2.beRepaired(10);
	dt3.takeDamage(50);
	dt1.whoAmI();
	dt2.whoAmI();
	dt3.whoAmI();
	
	DiamondTrap dt_maxdmg("MaxDamage");
	dt_maxdmg.takeDamage(1000);
	dt_maxdmg.whoAmI();
	
	DiamondTrap dt_repair("Repairer");
	dt_repair.takeDamage(50);
	for (int i = 0; i < 25; i++)
		dt_repair.beRepaired(2);
	dt_repair.whoAmI();

	return (0);
}
