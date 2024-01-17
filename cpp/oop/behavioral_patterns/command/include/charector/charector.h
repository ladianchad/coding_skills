#ifndef CHARACTOR_H
#define CHARACTOR_H
#include <command/command.h>
class Charactor
{
public:
    enum Direction{
        UP,
        RIGHT,
        DOWN,
        LEFT
    };

    Charactor(Command *attack, Command *depence);
    void attack();
    void depence();
    void move(Direction dir);

private:
    Command *attack_;
    Command *depence_;
};

#endif