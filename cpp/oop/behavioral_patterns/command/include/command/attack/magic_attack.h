#ifndef MAGIC_ATTACK_H
#define MAGIC_ATTACK_H
#include <command/attack/attack.h>

class MagicAttack : public Attack
{
public:
    virtual void execute() override;
};


#endif