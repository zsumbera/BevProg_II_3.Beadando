#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "boats.hpp"

using namespace std;
using namespace genv;

Boats::Boats(Window *w,int x,int y,int sx,int sy) : Widgets(w,x,y,sx,sy) {}

void Boats::draw() {
    gout<<move_to(_x,_y)<<color(40,200,40)<<box_to(_x+_sx,_y+_sy);

}

bool Boats::focus(event ev) {


    if (_x<ev.pos_x && _x+_sx>ev.pos_x && _y<ev.pos_y && _y+_sy>ev.pos_y && nyom)
        return _f = true;
    else return _f= false;
}
void Boats::exec(event ev) {
    if(_f){
        _x = ev.pos_x-_sx/2;
        _y = ev.pos_y-_sy/2;
    }
}