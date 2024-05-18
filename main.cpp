#include <iostream>
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "window.hpp"
#include "map.hpp"
#include "boats.hpp"
#include "simplelist.hpp"
#include "pushbutton.hpp"

using namespace std;
using namespace genv;

const int XX = 1200;
const int YY = 900;

class Window;
class Widgets;

int main() {
   Window *window = new Window(XX,YY);

   window->startloop();

    return 0;
}
