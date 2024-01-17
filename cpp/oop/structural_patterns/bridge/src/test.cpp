#include <shape/triangle.h>
#include <shape/pentagon.h>
#include <color/red.h>
#include <color/blue.h>

int main(int argc, char const *argv[])
{

    Shape * shape;
    Color * color;

    color = new Red();
    
    shape = new Triangle(color);
    shape->show();

    shape = new Pentagon(color);
    shape->show();

    color = new Blue();
    
    shape = new Triangle(color);
    shape->show();

    shape = new Pentagon(color);
    shape->show();

    

    return 0;
}
