
#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
    MateriaSource* src = new MateriaSource();
    AMateria *ice = new Ice();
    Character* me = new Character("me");

    ice->use(*me);
    ice->use(*me);
    ice->use(*me);
    src->learnMateria(ice);
    std::cout << src->createMateria("ice")->getXP() << std::endl;

    ICharacter* bob = new Character("bob");
    me->equip(src->createMateria("ice"));

    me->use(0, *bob);
    me->use(-1, *bob);
    me->use(10, *bob);

    me->unequip(-1);
    me->unequip(10);
    // me->unequip(0);

    me->use(0, *bob);

    std::cout << "equip 3 materia\n";

    me->equip(src->createMateria("ice"));
    me->use(0, *bob);
    me->equip(src->createMateria("ice"));
    me->use(1, *bob);
    me->equip(src->createMateria("ice"));
    me->use(2, *bob);



    std::cout << "unequip index 1\n";
    // me->unequip(1);
    std::cout << "use 0\n";

    me->use(0, *bob);
    std::cout << "use 1\n";
    me->use(1, *bob);
    std::cout << "use 2\n";
    me->use(2, *bob);


//    std::cout << "______________clone_____________\n";

//    Character *myClone = new Character(*me);
//    std::cout << myClone->getName() << std::endl;

//    std::cout << "use 0\n";
//    myClone->use(0, *bob);
//    std::cout << "use 1\n";
//    myClone->use(1, *bob);
//    std::cout << "equip and use 2\n";
//    myClone->equip(src->createMateria("ice"));
//    myClone->use(2, *bob);

//    std::cout << "try to use parent 2\n";
//    me->use(2, *bob);

//    Character myClone = *me;
//    std::cout << myClone.getName() << std::endl;

//    std::cout << "use 0\n";
//    myClone.use(0, *bob);
//    std::cout << "use 1\n";
//    myClone.use(1, *bob);
//    std::cout << "equip and use 2\n";
//    myClone.equip(src->createMateria("ice"));
//    myClone.use(2, *bob);

//    std::cout << "try to use parent 2\n";
//    me->use(2, *bob);

//    std::cout << "______________clone source materia_____________\n";

//    MateriaSource *cloneMateria = new MateriaSource(*src);
//    AMateria *cure = new Cure();

//    src->learnMateria(cure);
//    std::cout << src->createMateria("cure")->getXP() << std::endl;
//    cure->use(*bob);
//    cure->use(*bob);
//    cure->use(*bob);
//    cure->use(*bob);
//    std::cout << src->createMateria("cure")->getXP() << std::endl;
//    cloneMateria->learnMateria(cure);
//    std::cout << cloneMateria->createMateria("cure")->getXP() << std::endl;
//
//    MateriaSource cloneMateria = *src;
//    AMateria *cure = new Cure();
//    src->learnMateria(cure);

//    std::cout << src->createMateria("cure")->getXP() << std::endl;
//    cure->use(*bob);
//    cure->use(*bob);
//    cure->use(*bob);
//    cure->use(*bob);
//    std::cout << src->createMateria("cure")->getXP() << std::endl;
//    cloneMateria.learnMateria(cure);
//    std::cout << cloneMateria.createMateria("cure")->getXP() << std::endl;

    delete ice;
    delete src;
    delete bob;
    delete me;
//    delete cloneMateria;
    return (0);
}
