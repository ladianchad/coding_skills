#include <character.hpp>
#include <move/walk.hpp>
#include <move/car.hpp>

int main(int argc, char const *argv[])
{
  Character character(new Walk());

  character.move();

  character.setMoveStrategy(new Car());

  character.move();
  
  return 0;
}
