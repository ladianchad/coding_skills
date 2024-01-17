#ifndef ATTACK_H
#define ATTACK_H
#include <command/command.h>

class Attack : public Command
{
public:
    virtual void execute() override;
};


#endif