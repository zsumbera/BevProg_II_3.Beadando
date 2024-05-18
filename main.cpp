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

    std::vector<Map*> m;
    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j <= 10; ++j) {
            Map * map = new Map(window,650+i*50,100+j*50,50,50);
            m.push_back(map);
        }
    }
    for (int i = 1; i <= 4; ++i) {
        Boats * boat = new Boats(window,50,130+i*60,40,40,i,m);
    }
    Pushbutton * button = new Pushbutton(window,900,700,100,50);


   window->startloop();

    return 0;
}
