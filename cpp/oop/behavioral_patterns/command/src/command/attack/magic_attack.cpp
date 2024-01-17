#include <command/attack/magic_attack.h>
#include <iostream>

void MagicAttack::execute(){
    std::cout<<"magic ";
    Attack::execute();
}