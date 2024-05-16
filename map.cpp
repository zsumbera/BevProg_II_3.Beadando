#include "map.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

using namespace genv;
using namespace std;

Map::Map(Window *w,int x,int y,int sx,int sy) : Widgets(w,x,y,sx,sy) {}

void Map::draw() {
    gout<< move_to(_x,_y)<<color(51,51,255)<<box_to(_x+_sx,_y+_sy);
    gout<< move_to(_x+1,_y+1)<<color(0,0,0)<<box_to(_x+_sx-2,_y+_sy-2)<<move_to(_x,_y);
}

bool Map::focus(event ev) {
    return _f=false;
}


int Map::getPx(){
    return _x;
}
int Map::getPy(){
    return _y;
}
int Map::getSx(){
    return _sx;
}
int Map::getSy(){
    return _sy;
}
