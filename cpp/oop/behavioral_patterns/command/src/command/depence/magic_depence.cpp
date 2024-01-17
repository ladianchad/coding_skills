#include <command/depence/magic_depence.h>
#include <iostream>

void MagicDepence::execute(){
    std::cout<<"magic ";
    Depence::execute();
}