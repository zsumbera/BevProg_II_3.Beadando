#include <iostream>
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "window.hpp"
#include "map.hpp"
#include "boats.hpp"

using namespace std;
using namespace genv;

const int XX = 1200;
const int YY = 900;

class Window;
class Widgets;

int main() {
   Window *window = new Window(XX,YY);
   Map * map = new Map(window,500,100,650,650);
   Boats * smboat = new Boats(window,50,130,120,55);
    Boats * mboat = new Boats(window,50,200,240,55);
    Boats * lboat = new Boats(window,50,270,300,55);
    Boats * xlboat = new Boats(window,50,330,360,55);

   window->loop();

    return 0;
}
