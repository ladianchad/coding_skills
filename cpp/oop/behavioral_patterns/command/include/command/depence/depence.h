#ifndef DEPENCE_H
#define DEPENCE_H
#include <command/command.h>

class Depence : public Command
{
public:
    virtual void execute() override;
};


#endif