#include "map.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

using namespace genv;
using namespace std;

Map::Map(Window *w,int x,int y,int sx,int sy) : Widgets(w,x,y,sx,sy) {}

void Map::draw() {
    gout<< move_to(_x,_y)<<color(51,51,255)<<box_to(_x+_sx,_y+_sy);
    gout<< move_to(_x+5,_y+5)<<color(0,0,0)<<box_to(_x+_sx-5,_y+_sy-5);
    for (int i = _x+_sx/10; i <= _x+_sx-_sx/10; i+=_sx/10) {
        gout<<move_to(i,_y+10)<<color(60,60,60)<<line_to(i,_y+_sy);
    }
    for (int i = _y+_sy/10; i <= _y+_sy-_sy/10; i+=_sy/10) {
        gout<<move_to(_x+10,i)<<color(60,60,60)<<line_to(_x+_sx,i);
    }
}

