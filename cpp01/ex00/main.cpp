#include "Zombie.h"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	
	randomChump("StackZombie");
	
	delete heapZombie;
	
	return (0);
}
