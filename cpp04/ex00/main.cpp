#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Wanimal.h"
#include "Wcat.h"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "\nGetting types:" << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    std::cout << "j->getType(): " << j->getType() << std::endl;
    std::cout << "i->getType(): " << i->getType() << std::endl;
    
    std::cout << "meta->makeSound(): ";
    meta->makeSound();
    std::cout << "j->makeSound(): ";
    j->makeSound();
    std::cout << "i->makeSound(): ";
    i->makeSound();
    
    const Wanimal* wmeta = new Wanimal();
    const Wanimal* wcat = new Wcat();
    
    std::cout << "\nGetting types:" << std::endl;
    std::cout << "wmeta->getType(): " << wmeta->getType() << std::endl;
    std::cout << "wcat->getType(): " << wcat->getType() << std::endl;
    
    std::cout << "\nCalling makeSound() - should show WRONG BEHAVIOR (no virtual):" << std::endl;
    std::cout << "wmeta->makeSound(): ";
    wmeta->makeSound();
    std::cout << "wcat->makeSound(): ";
    wcat->makeSound();
    
    Dog directDog;
    Cat directCat;

    std::cout << "\nDirect dog sound: ";
    directDog.makeSound();
    std::cout << "Direct cat sound: ";
    directCat.makeSound();
    
    Dog dog1;
    std::cout << "\nCopying dog1 to dog2:" << std::endl;
    Dog dog2(dog1);
    
    std::cout << "\nAssigning dog1 to dog3:" << std::endl;
    Dog dog3 = dog1;
    
    delete meta;
    delete j;
    delete i;
    delete wmeta;
    delete wcat;
    

    return 0;
}