#include <game.h>
#include <iostream>

int main(int argc, char const *argv[])
{

    std::cout<<"--------------- Basic ----------------"<<std::endl;
    Attack basic_attack;
    Depence basic_depence;

    Charactor basic_charactor(&basic_attack, &basic_depence);
    basic_charactor.attack();
    basic_charactor.move(Charactor::Direction::UP);
    basic_charactor.depence();
    basic_charactor.move(Charactor::Direction::DOWN);


    std::cout<<"--------------- Special ----------------"<<std::endl;
    MagicAttack magic_attack;
    MagicDepence magic_depence;

    Charactor magic_charactor(&magic_attack, &magic_depence);
    magic_charactor.attack();
    magic_charactor.move(Charactor::Direction::UP);
    magic_charactor.depence();
    magic_charactor.move(Charactor::Direction::DOWN);

    return 0;
}
